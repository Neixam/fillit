/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 17:11:14 by abourenn          #+#    #+#             */
/*   Updated: 2019/03/02 17:02:48 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_creat_str_index(char **tab)
{
	int		index_tab;
	char	*index;
	int		i;

	index_tab = 0;
	while (tab[index_tab] != 0)
		index_tab++;
	if (!(index = (char*)malloc(sizeof(char) * (index_tab + 1))))
		return (NULL);
	i = 0;
	while (i < index_tab)
	{
		index[i] = '1';
		i++;
	}
	index[i] = '\0';
	return (index);
}

int		ft_ilen(int *tab)
{
	int		count;

	count = 0;
	while (tab[count] != -2)
		count++;
	return (count);
}

int		ft_ilenl(int *square)
{
	int		count;

	count = 0;
	while (square[count] != -2 && square[count] != -1)
		count++;
	return (count + 1);
}

int		ft_tabstrlen(char **tab)
{
	int		index_tab;

	index_tab = 0;
	while (tab[index_tab] != 0)
		index_tab++;
	return (index_tab);
}
