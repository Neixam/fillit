/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:56:27 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/17 15:01:38 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strtrimext(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		tmp;

	tmp = start;
	i = 0;
	if (!(str = (char *)malloc(1 + len * (sizeof(char)))))
		return (NULL);
	while (start < len + tmp)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_my_isblank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		nbspace;
	int		i;
	int		tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (ft_my_isblank(s[i]) == 1)
		i++;
	nbspace = i;
	tmp = i;
	i = ft_strlen(s) - 1;
	while (ft_my_isblank(s[i]) == 1)
	{
		nbspace++;
		i--;
	}
	if (nbspace == 0)
		return (ft_strdup((char *)s));
	if (nbspace / 2 == (int)ft_strlen(s))
		nbspace = 0;
	str = ft_strtrimext(s, tmp, (size_t)(ft_strlen(s) - nbspace));
	return (str);
}
