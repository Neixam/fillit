/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:22:26 by anboilea          #+#    #+#             */
/*   Updated: 2019/02/09 19:06:47 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_usage(void)
{
	ft_putstr("usage: fillit [tetriminos_file]\n");
}

int		put_error(void)
{
	ft_putstr("error\n");
	return (1);
}
