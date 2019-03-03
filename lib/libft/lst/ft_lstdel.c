/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 11:43:47 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 15:59:29 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		ft_lstdelrecu(t_list *alst, void (*del)(void *, size_t))
{
	if ((alst)->next != NULL)
		ft_lstdelrecu(alst->next, del);
	del((alst)->content, (alst)->content_size);
	free(alst);
	alst = NULL;
}

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!*alst || !del)
		return ;
	ft_lstdelrecu(*alst, del);
	*alst = NULL;
}
