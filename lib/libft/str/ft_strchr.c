/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:36:56 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/11 16:11:27 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (ss[i])
	{
		if (ss[i] == c)
			return (ss + i);
		i++;
	}
	if (c == '\0')
		return (ss + i);
	return (NULL);
}
