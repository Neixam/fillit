/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 11:23:45 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/02 13:45:20 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

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
			return (1);
		}
		if (start_resolve(tab) == -1)
			return (1);
	}
	else
		put_usage();
	return (0);
}
