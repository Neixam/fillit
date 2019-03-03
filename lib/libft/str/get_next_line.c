/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 15:51:37 by anboilea          #+#    #+#             */
/*   Updated: 2018/12/29 15:06:54 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*ss2;
	char	*str;

	if (!(s1 && s2))
		return (NULL);
	ss2 = (char *)s2;
	i = -1;
	if (!(str = (char *)malloc((1 + ft_strlen((char *)s1) +
						ft_strlen(ss2)) * sizeof(char))))
		return (NULL);
	while ((char)s1[++i] != '\0')
		str[i] = (char)s1[i];
	k = i;
	i = 0;
	while (ss2[i] != '\0')
	{
		str[k] = ss2[i];
		i++;
		k++;
	}
	str[k] = '\0';
	free((char *)s1);
	return (str);
}

char	*ft_strachr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (ss[i])
	{
		if (ss[i] == c)
			return (ss + i + 1);
		i++;
	}
	if (c == '\0')
		return (ss + i);
	return (ss + i);
}

char	*get_next_read(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (!(ret = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	free(str);
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	static char	more[MAX_FD][BUFF_SIZE + 1];
	char		*str;
	int			ret;

	if ((fd < 0 || fd > MAX_FD) || !line)
		return (-1);
	str = ft_strdup(more[fd]);
	while (!(ft_strchr(more[fd], '\n')) &&
			(ret = read(fd, more[fd], BUFF_SIZE)))
	{
		more[fd][ret] = '\0';
		if ((!(str = ft_strjoin_free(str, more[fd])) || ret == -1))
			return (-1);
	}
	if (ft_strlen(str) == 0)
	{
		free(str);
		return (0);
	}
	*line = get_next_read(str);
	ft_strcpy(more[fd], ft_strachr(more[fd], '\n'));
	return (1);
}
