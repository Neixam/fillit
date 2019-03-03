/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:48:16 by anboilea          #+#    #+#             */
/*   Updated: 2019/02/09 13:49:13 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdarg.h>

static void	ft_find(char *str, va_list ap)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
			{
				ft_putnbr(va_arg(ap, int));
				i++;
			}
			if (str[i] == 's')
			{
				ft_putstr(va_arg(ap, char *));
				i++;
			}
		}
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_min_printf(const char *fmt, ...)
{
	va_list	ap;

	va_start(ap, fmt);
	ft_find((char *)fmt, ap);
	va_end(ap);
	return (0);
}
