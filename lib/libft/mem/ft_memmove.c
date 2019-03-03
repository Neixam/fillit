/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:45:57 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/16 14:38:47 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	i = 0;
	sdest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if (sdest < ssrc)
	{
		while (i < n)
		{
			sdest[i] = ssrc[i];
			i++;
		}
	}
	else if (ssrc < sdest)
	{
		while (i < n)
		{
			sdest[n - 1 - i] = ssrc[n - 1 - i];
			i++;
		}
	}
	return (sdest);
}
