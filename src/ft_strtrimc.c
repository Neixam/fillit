/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 19:30:49 by abourenn          #+#    #+#             */
/*   Updated: 2019/01/03 15:37:23 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strtrimc(char *str, char c)
{
	size_t	index;
	size_t	index_f;
	size_t	len;
	char	*trimc;

	index = 0;
	index_f = ft_strlen(str) - 1;
	while ((str[index] == c || str[index] == '\n') && (index < index_f))
		index++;
	while ((str[index_f] == c || str[index_f] == '\n') && (index_f > index))
		index_f--;
	len = (index_f - index) + 1;
	if (!(trimc = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	index_f = 0;
	while (index_f < len && len != 1)
	{
		trimc[index_f] = str[index + index_f];
		index_f++;
	}
	trimc[index_f] = '\0';
	return (trimc);
}

char	*ft_strjoinfree(char *s1, char *s2, int trool)
{
	char	*ret;

	if ((ret = ft_strjoin(s1, s2)) == NULL)
		return (NULL);
	if (trool % 2 == 0)
		free(s1);
	if (trool > 0)
		free(s2);
	return (ret);
}
