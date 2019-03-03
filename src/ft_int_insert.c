/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:45:43 by anboilea          #+#    #+#             */
/*   Updated: 2019/02/23 16:51:29 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "fillit.h"

int		*ft_int_insert(int *tab, int pos, int val, int size)
{
	int i;
	int *ret;
	int j;

	j = 0;
	i = 0;
	size++;
	if (!(ret = (int *)malloc(sizeof(int) * size + 1)))
		return (NULL);
	while (i < pos)
	{
		ret[i] = tab[i];
		i++;
	}
	j = i;
	ret[i] = val;
	i++;
	while (i <= size)
	{
		ret[i] = tab[j];
		i++;
		j++;
	}
	return (ret);
}
