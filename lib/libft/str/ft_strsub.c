/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:52:55 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 17:20:29 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		tmp;

	tmp = start;
	i = 0;
	if (s)
	{
		if ((start + len > ft_strlen(s)))
			return (NULL);
		if (!(str = (char*)malloc(1 + len * sizeof(char))))
			return (NULL);
		if (len == 0)
			return (str);
		while (start < len + tmp)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
