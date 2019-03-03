/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:02:11 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/16 13:02:13 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *str, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c) && ((str[i + 1] == c) || str[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}
