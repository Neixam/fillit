/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 15:32:53 by anboilea          #+#    #+#             */
/*   Updated: 2019/06/01 00:43:01 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		*fill_grid(int *grid, int n)
{
	int l;
	int tmp;

	tmp = n + 1;
	l = n;
	grid[n] = -1;
	while (l > 1)
	{
		n = n + tmp;
		grid[n] = -1;
		l--;
	}
	return (grid);
}

int		*gen_grid(char **tab)
{
	int		i;
	int		*grid;
	int		tmp;

	i = 0;
	while (tab[i] != 0)
		i++;
	tmp = ft_sqrt(i * 4);
	i = tmp * tmp + tmp;
	if (!(grid = (int *)malloc(sizeof(int) * (i + 1))))
		return (NULL);
	grid[i] = -2;
	grid = ft_int_init(grid, i, 0);
	grid = fill_grid(grid, tmp);
	return (grid);
}
