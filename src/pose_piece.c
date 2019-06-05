/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pose_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:22:15 by abourenn          #+#    #+#             */
/*   Updated: 2019/06/06 00:59:06 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		pose_piece_1(int *square, char **tab, int index, char *index_tab)
{
	if (pose_piece(square, tab, index, index_tab) == 1)
		return (1);
	return (0);
}
