/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:08:55 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/03 12:55:22 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	insert_piece(int *square, char *tab, int nb_tetri, int index_sqr)
{
	int		index;
	int		len_l;

	index = 0;
	len_l = ft_ilenl(square);
	while (tab[index] != '\0')
	{
		square[index_sqr] += (tab[index] == '#') ? nb_tetri : 0;
		if (tab[index] == '\n')
		{
			index_sqr += len_l;
			len_l = ft_ilenl(square);
		}
		else
		{
			index_sqr++;
			len_l--;
		}
		index++;
	}
}

int		*ft_int_init(int *tab, int size, int val)
{
	int i;

	i = 0;
	while (i < size)
	{
		tab[i] = val;
		i++;
	}
	return (tab);
}
