/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:43:09 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 10:06:40 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int len;
	int deb;
	int tmp;
	int mid;

	len = ft_strlen(str);
	mid = len / 2;
	deb = 0;
	while (deb < mid)
	{
		tmp = str[len - 1];
		str[len - 1] = str[deb];
		str[deb] = tmp;
		len--;
		deb++;
	}
	return (str);
}
