/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:33:35 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/17 15:46:38 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t desttmp;
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	if (n <= 0)
		return (ft_strlen(src));
	if (ft_strlen(dest) > n)
		return (ft_strlen(src) + n);
	desttmp = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && (k + desttmp + 1) < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (desttmp + ft_strlen(src));
}
