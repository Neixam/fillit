/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:53:04 by anboilea          #+#    #+#             */
/*   Updated: 2018/12/20 16:31:10 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_fill(const char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (!(str = malloc(1 + (i * sizeof(char)))))
		return (NULL);
	str[i] = '\0';
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;
	int		j;
	char	*tmp;
	int		k;

	i = 0;
	j = -1;
	if (s == NULL)
		return (NULL);
	k = ft_countword(s, c);
	if (!(tab = (char **)malloc(1 + (k * sizeof(char*)))))
		return (NULL);
	tab[k] = 0;
	while (++j < k)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		tmp = ft_fill(&s[i], c);
		if (tmp != NULL)
			tab[j] = tmp;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (tab);
}
