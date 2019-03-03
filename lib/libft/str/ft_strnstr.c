/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 08:35:43 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/11 10:02:46 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str1);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[i])
		{
			while (((str[j + i] == to_find[i]) &&
						(to_find[i] != '\0')) && (i + j < len))
				i++;
			if (to_find[i] == '\0')
				return (&str1[j]);
			i = 0;
		}
		j++;
	}
	return (0);
}
