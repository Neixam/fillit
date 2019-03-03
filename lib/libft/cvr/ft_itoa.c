/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:15:28 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/16 14:35:44 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	int		i;
	int		sign;

	sign = 0;
	tmp = n;
	if (tmp < 0)
	{
		tmp *= -1;
		sign = 1;
	}
	i = ft_nbrlen(tmp) + sign;
	if (!(str = (char *)malloc(1 + i * sizeof(char))))
		return (NULL);
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = tmp % 10 + '0';
		tmp /= 10;
		i--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
