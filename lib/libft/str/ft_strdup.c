/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:23:12 by anboilea          #+#    #+#             */
/*   Updated: 2019/06/03 13:56:56 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*duplicated;
	int		i;

	if (!(duplicated = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
