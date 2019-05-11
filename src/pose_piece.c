/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pose_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:22:15 by abourenn          #+#    #+#             */
/*   Updated: 2019/03/03 13:04:02 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		pose_piece_1(int *square, char **tab, int index, char *index_tab)
{
	if (ft_tabstrlen(tab) < 7)
	{
		if (pose_piece(square, tab, index, index_tab) == 1)
			return (1);
	}
	else
	{
		if (pose_piece_2(square, tab[index], index + 1, 0) == 1)
		{
			index_tab[index] = '0';
			if (resolve(square, tab, index_tab, index) == 1)
				return (1);
		}
	}
	return (0);
}
