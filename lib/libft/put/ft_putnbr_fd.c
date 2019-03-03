/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:42:30 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 17:00:22 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putminint_fd(int fd)
{
	ft_putchar_fd('2', fd);
	ft_putchar_fd('1', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('7', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('8', fd);
	ft_putchar_fd('3', fd);
	ft_putchar_fd('6', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('8', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	int tmp;
	int nbdiv;

	if (n > -10 && n < 10)
		nbdiv = 1;
	else
		nbdiv = 10;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n == -2147483648)
		return (ft_putminint_fd(fd));
	tmp = n;
	while ((n /= 10) >= 10)
		nbdiv *= 10;
	while (nbdiv > 0)
	{
		ft_putchar_fd(tmp / nbdiv + '0', fd);
		tmp = tmp - ((tmp / nbdiv) * nbdiv);
		nbdiv /= 10;
	}
}
