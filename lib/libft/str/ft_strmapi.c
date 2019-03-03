/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:30:21 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/17 19:06:18 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*str;

	if (s && f)
	{
		str = ft_strdup(s);
		if (str == NULL)
			return (NULL);
		index = 0;
		while (str[index] != '\0')
		{
			str[index] = f(index, str[index]);
			index++;
		}
		return (str);
	}
	return (NULL);
}
