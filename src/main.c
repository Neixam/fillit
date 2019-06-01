/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 11:23:45 by anboilea          #+#    #+#             */
/*   Updated: 2019/06/01 04:56:17 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

int		ft_count_tabstr(char **tab)
{
	int		count;

	count = 0;
	while (tab[count] != 0)
		count++;
	return (count);
}

void	free_trash(char **tab, int boo)
{
	int i;
	int len;

	i = 0;
	len = ft_count_tabstr(tab);
	while (i < len - boo)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	**tab;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (check_file(fd, &tab) == -1)
		{
			put_error();
			free_trash(tab, 1);
			close(fd);
			return (1);
		}
		if (start_resolve(tab) == -1)
		{
			free_trash(tab, 0);
			close(fd);
			return (1);
		}
		if (tab)
			free_trash(tab, 0);
	}
	else
		put_usage();
	return (0);
}
