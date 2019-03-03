/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 12:49:04 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/18 13:27:52 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *lstnew)
{
	if (!lstnew)
		return ;
	if (!*alst)
	{
		*alst = lstnew;
		return ;
	}
	lstnew->next = *alst;
	*alst = lstnew;
}
