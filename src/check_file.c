/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:55:39 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/02 13:46:37 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**transform_tab(char **tab)
{
	int		index_tab;
	int		index_nt;
	char	**new_tab;

	index_tab = 0;
	while (tab[index_tab] != 0)
		index_tab++;
	if (!(new_tab = (char**)malloc(sizeof(char*) * (index_tab + 1))))
		return (NULL);
	index_nt = 0;
	while (index_nt < index_tab)
	{
		new_tab[index_nt] = ft_ultrim(tab[index_nt], 69);
		index_nt++;
	}
	new_tab[index_nt] = 0;
	free(tab);
	return (new_tab);
}

int		check_ifvalid(char *tetri)
{
	int i;
	int d;

	d = 0;
	i = 0;
	if (tetri == NULL || ft_strlen(tetri) != 20)
		return (-1);
	while (tetri[i])
	{
		if (tetri[i] == '.' || tetri[i] == '#' || tetri[i] == '\n')
			if (tetri[i] == '#')
				d++;
		if (tetri[4] == '\n' && tetri[9] == '\n' && tetri[14] == '\n' &&
			tetri[19] == '\n' && d == 4)
			return (1);
		i++;
	}
	return (-1);
}

int		checkintree(t_tree *tr, char *wd)
{
	if (!(tr))
		return (0);
	if (*wd == '\0' && tr->letter == *wd)
		return (1);
	if (*wd != tr->letter)
		if (!(tr->bro))
			return (0);
	return (checkintree(tr->next, wd + 1) || checkintree(tr->bro, wd));
}

int		check_tetri(char **tab)
{
	int		i;
	t_tree	*treeminos;

	i = 0;
	if ((treeminos = creatreeminos()) == NULL)
		return (-1);
	while (tab[i] != 0)
	{
		if (i > 25)
			return (-1);
		if (tab[i] == NULL)
			return (-1);
		if (tab[i + 1] != 0)
			tab[i] = ft_strjoin(tab[i], "\n");
		if (check_ifvalid(tab[i]) == -1)
			return (-1);
		if (checkintree(treeminos, ft_strtrimc(tab[i], '.')) == 0)
			return (-1);
		i++;
	}
	return (1);
}

int		check_file(int fd, char ***tab)
{
	int		i;
	char	*line;
	char	*file;

	i = 0;
	line = "";
	file = "";
	while (get_next_line(fd, &line) == 1)
	{
		file = ft_strjoin(file, line);
		file = ft_strjoin(file, "\n");
		i++;
	}
	if ((*tab = ft_strstrsplit(file, "\n\n")) == NULL)
		return (-1);
	if (check_tetri(*tab) == -1)
		return (-1);
	*tab = transform_tab(*tab);
	return (1);
}
