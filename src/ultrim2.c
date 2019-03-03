/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultratrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:09:22 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/02 13:48:55 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "fillit.h"

int		ft_max_h(char *str)
{
	int i;
	int	n;
	int d;

	n = 1;
	i = 0;
	d = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			n++;
		if (str[i] == '#')
			d++;
		if (d == 4)
			return (n);
		i++;
	}
	return (0);
}

int		ft_min_h(char *str)
{
	int i;
	int	n;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			n++;
		if (str[i] == '#')
			return (n);
		i++;
	}
	return (0);
}

int		ft_max(char *str)
{
	int i;
	int tmp;
	int max;

	max = 0;
	tmp = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			tmp = 0;
		if (str[i] == '#')
		{
			if (tmp > max)
				max = tmp;
		}
		i++;
		tmp++;
	}
	return (max);
}

int		ft_min(char *str)
{
	int i;
	int tmp;
	int min;

	min = 20;
	tmp = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			tmp = 0;
		if (str[i] == '#')
		{
			if (tmp < min)
				min = tmp;
		}
		i++;
		tmp++;
	}
	return (min);
}

char	*ft_cut(char *str)
{
	char	*ret;
	int		nb_char;
	int		i;

	i = 0;
	nb_char = (ft_max_h(str) - ft_min_h(str)) * (ft_max(str) -
			ft_min(str) + 1) + (ft_max_h(str) - ft_min_h(str));
	if (!(ret = (char *)malloc(sizeof(char) * nb_char + 1)))
		return (NULL);
	while (i < nb_char)
	{
		ret[i] = 'a';
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
