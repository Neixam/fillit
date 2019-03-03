/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:22:07 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/16 13:04:04 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sdest;
	unsigned char	*ssrc;
	unsigned char	cc;

	ssrc = (unsigned char *)src;
	sdest = (unsigned char *)dest;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		if (ssrc[i] == cc)
			return (&sdest[i + 1]);
		i++;
	}
	return (NULL);
}
