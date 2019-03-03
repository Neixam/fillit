/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:40:50 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/11 16:09:10 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char*)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ss[i] == c)
			return (&ss[i]);
		i--;
	}
	return (NULL);
}
