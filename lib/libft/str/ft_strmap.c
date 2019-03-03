/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:53:04 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/17 19:06:05 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			str[index] = f(str[index]);
			index++;
		}
		return (str);
	}
	return (NULL);
}
