/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 11:23:45 by anboilea          #+#    #+#             */
/*   Updated: 2019/05/31 21:00:36 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>


void	free_trash(char **tab)
{
	int i;

	i = 0;
	while (tab[i + 1] != 0)
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
			free_trash(tab);
			close(fd);
			return (1);
		}
		if (start_resolve(tab) == -1)
		{
			close(fd);
			return (1);
		}
	}
	else
		put_usage();
	return (0);
}
