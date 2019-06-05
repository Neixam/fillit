/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 14:43:54 by abourenn          #+#    #+#             */
/*   Updated: 2019/06/06 01:42:02 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verif_place(int *sq, char *tab, int len_l, int i_sqr)
{
	if (*tab == '\0')
		return (1);
	if (i_sqr >= ft_ilen(sq))
		return (0);
	if (*tab == '\n')
		return (verif_place(sq, tab + 1, ft_ilenl(sq), i_sqr + len_l));
	if (*tab == '.')
		return (verif_place(sq, tab + 1, len_l - 1, i_sqr + 1));
	if (sq[i_sqr] != 0)
		return (0);
	if (verif_place(sq, tab + 1, len_l - 1, i_sqr + 1) == 1)
		return (1);
	return (0);
}

int		pose_piece(int *square, char **tab, int index, char *index_tab)
{
	int		index_sqr;

	index_sqr = 0;
	while (square[index_sqr] != -2)
	{
		if (verif_place(square, tab[index], ft_ilenl(square), index_sqr) == 1)
		{
			insert_piece(square, tab[index], index + 1, index_sqr);
			index_tab[index] = '0';
			if (resolve(square, tab, index_tab, index) == 1)
				return (1);
		}
		index_sqr++;
		if (square[index_sqr] == -1)
			index_sqr++;
	}
	return (0);
}


int		resolve(int *square, char **tab, char *index_tab, int index_ref)
{
	int		index;

	if (!(ft_strchr(index_tab, '1')))
		return (1);
	index = 0;
	while (tab[index] != 0)
	{
		if (index_tab[index] == '1')
		{
			if (pose_piece(square, tab, index, index_tab) == 1)
				return (1);
			if ((ft_strchr(index_tab, '0')))
			{
				ft_reinit_resolve(square, index_ref + 1);
				index_tab[index_ref] = '1';
				return (0);
			}
		}
		index++;
	}
	ft_reinit_resolve(square, index_ref + 1);
	index_tab[index_ref] = '1';
	return (0);
}

int		start_resolve(char **tab)
{
	int		*square;
	char	*index_tab;

	if ((square = gen_grid(tab)) == NULL)
		return (-1);
	if ((index_tab = ft_creat_str_index(tab)) == NULL)
	{
		free(square);
		return (-1);
	}
	while (resolve(square, tab, index_tab, 0) == 0)
		square = ft_ra(square);
	ft_print(square);
	free(index_tab);
	free(square);
	return (1);
}
