/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultratrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:09:22 by anboilea          #+#    #+#             */
/*   Updated: 2019/06/01 01:58:51 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "fillit.h"

char	*ft_ultrim(char *str, int j)
{
	int		i;
	int		width;
	char	*ret;
	int		tmp;
	int		l;

	l = ft_max_h(str) - ft_min_h(str);
	j = 0;
	width = ft_max(str) - ft_min(str) + 1;
	tmp = width;
	i = ft_min_h(str) * 5 + ft_min(str) - 1;
	ret = ft_cut(str);
	while (l-- > 0)
	{
		while (width-- > 0)
			ret[j++] = str[i++];
		width = tmp;
		ret[j++] = '\n';
		i = i + (5 - tmp);
	}
	return (ret);
}
