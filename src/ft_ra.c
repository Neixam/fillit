/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 10:34:12 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/02 13:43:50 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "fillit.h"

void	ft_reinit_resolve(int *square, int tetri)
{
	int		index;

	index = 0;
	while (square[index] != -2)
	{
		if (square[index] == tetri)
			square[index] = 0;
		index++;
	}
}

void	ft_reinit_tab(int *tab)
{
	int		index;

	index = 0;
	while (tab[index] != -2)
	{
		if (tab[index] != -1 && tab[index] != -2)
			tab[index] = 0;
		index++;
	}
}

void	ft_ralloujust(int *ret, int n, int width)
{
	int		index;

	index = width;
	while (index < n)
	{
		ret[index] = -1;
		index += width + 1;
	}
}

int		*ft_fillra(int *ret, int *grid, int size)
{
	int		i;
	int		decal;

	decal = 0;
	i = 0;
	while (grid[i] != -2)
	{
		ret[i] = grid[i];
		i++;
	}
	i = 0;
	while (ret[i] != -2)
	{
		if (ret[i] == -1)
		{
			ret = ft_int_insert(ret, i, 0, size + decal);
			decal++;
			i++;
		}
		i++;
	}
	ret[i - 1] = -1;
	return (ret);
}

int		*ft_ra(int *grid)
{
	int		n;
	int		*ret;
	int		width;

	width = 0;
	while (grid[width] != -1)
		width++;
	width++;
	n = (width + 1) * (width);
	if (!(ret = (int *)malloc(sizeof(int) * (n + 1))))
		return (0);
	ret = ft_int_init(ret, n, 0);
	ret[n] = -2;
	ft_ralloujust(ret, n, width);
	free(grid);
	return (ret);
}
