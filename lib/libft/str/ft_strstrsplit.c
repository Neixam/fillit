/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:43:40 by anboilea          #+#    #+#             */
/*   Updated: 2019/06/03 13:51:47 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_delims(char *str, char *delims)
{
	int i;
	int j;
	int words;

	i = 0;
	j = 0;
	words = 1;
	while (str[i] != '\0')
	{
		if (str[i] == delims[j])
		{
			while ((str[i + j] == delims[j]) && (delims[j] != '\0'))
				j++;
			if (delims[j] == '\0')
				words++;
			j = 0;
		}
		i++;
	}
	return (words);
}

char		*ft_strfill(char *str, char *delims)
{
	int		j;
	int		i;
	char	*ret;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delims[j])
		{
			while ((str[i + j] == delims[j]) && (delims[j] != '\0'))
				j++;
			if (delims[j] == '\0')
			{
				if (!(ret = (char *)malloc((1 + i) * sizeof(char))))
					return (NULL);
				ret[i] = '\0';
				return (ft_strncpy(ret, str, i));
			}
			j = 0;
		}
		i++;
	}
	return (ft_strdup(str));
}

char		**ft_strstrsplit(char *str, char *delims)
{
	int		k;
	int		j;
	int		i;
	char	**tab;

	i = 0;
	j = 0;
	if ((str == NULL) || (ft_strcmp(str, delims) == 0))
		return (NULL);
	k = count_delims(str, delims);
	if (!(tab = (char **)malloc((1 + k) * sizeof(char*))))
		return (NULL);
	tab[k] = 0;
	while (j < k)
	{
		tab[j] = ft_strfill(str + i, delims);
		if (tab[j] == NULL)
			return (NULL);
		i = i + ft_strlen(tab[j]) + 2;
		j++;
	}
	return (tab);
}
