/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:30:34 by anboilea          #+#    #+#             */
/*   Updated: 2018/12/20 16:30:38 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_realloc(char *str, char *buf)
{
	int		i;
	int		j;
	char	*ret;

	i = ft_strlen(str);
	j = ft_strlen(buf);
	ret = NULL;
	if (!(ret = malloc(sizeof(char*) * (i + j + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	j = 0;
	while (buf[j] != '\0')
	{
		ret[i + j] = buf[j];
		j++;
	}
	ret[i + j] = '\0';
	if (str != NULL)
		free(str);
	return (ret);
}
