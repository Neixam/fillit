/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 15:20:45 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/17 17:55:27 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*ss2;
	char	*str;

	if (!(s1 && s2))
		return (NULL);
	ss2 = (char *)s2;
	i = -1;
	if (!(str = (char *)malloc((1 + ft_strlen((char *)s1) +
						ft_strlen(ss2)) * sizeof(char))))
		return (NULL);
	while ((char)s1[++i] != '\0')
		str[i] = (char)s1[i];
	k = i;
	i = 0;
	while (ss2[i] != '\0')
	{
		str[k] = ss2[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
