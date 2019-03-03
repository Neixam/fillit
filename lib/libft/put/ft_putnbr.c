/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:53:38 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 16:59:42 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putminint(void)
{
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void		ft_putnbr(int n)
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
		ft_putchar('-');
	}
	if (n == -2147483648)
		return (ft_putminint());
	tmp = n;
	while ((n /= 10) >= 10)
		nbdiv *= 10;
	while (nbdiv > 0)
	{
		ft_putchar(tmp / nbdiv + '0');
		tmp = tmp - ((tmp / nbdiv) * nbdiv);
		nbdiv /= 10;
	}
}
