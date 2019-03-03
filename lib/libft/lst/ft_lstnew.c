/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 10:40:57 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 11:17:23 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	struct s_list	*new;

	if (!(new = (struct s_list *)malloc(sizeof(struct s_list))))
		return (NULL);
	new->next = NULL;
	if (new)
	{
		if (content)
		{
			if (!(new->content = ft_memalloc(content_size)))
			{
				free(new);
				return (NULL);
			}
			new->content = ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		return (new);
	}
	return (NULL);
}
