/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:14:27 by anboilea          #+#    #+#             */
/*   Updated: 2018/12/28 20:03:33 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10029
# define MAX_FD 4864
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

int get_next_line(const int fd, char **line);

#endif
