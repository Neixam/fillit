/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 10:31:11 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/02 13:46:01 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print(int *fldgrd)
{
	int i;

	i = 0;
	while (fldgrd[i] != -2)
	{
		if (fldgrd[i] == 0)
			ft_putchar('.');
		if (fldgrd[i] == -1)
			ft_putchar('\n');
		if (fldgrd[i] > 0)
			ft_putchar(fldgrd[i] + 64);
		i++;
	}
}
