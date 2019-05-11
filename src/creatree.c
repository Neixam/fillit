/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:01:08 by abourenn          #+#    #+#             */
/*   Updated: 2019/02/09 19:11:30 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tree	*creatree(char letter)
{
	t_tree	*treeminos;

	if (!(treeminos = (t_tree*)malloc(sizeof(t_tree))))
	{
		free(treeminos);
		return (NULL);
	}
	treeminos->next = NULL;
	treeminos->bro = NULL;
	treeminos->letter = letter;
	return (treeminos);
}

int		creatnoeud(t_tree **treeminos, char *language)
{
	if ((*treeminos) == NULL)
		if ((*treeminos = creatree(*language)) == NULL)
			return (-1);
	if (*language == '\0')
		return (1);
	if ((*treeminos)->letter != *language)
		return (creatnoeud(&(*treeminos)->bro, language));
	return (creatnoeud(&(*treeminos)->next, language + 1));
}

t_tree	*creatreeminos(void)
{
	t_tree	*racine;
	int		index;
	char	**language;

	if ((racine = creatree('#')) == NULL)
		return (NULL);
	language = creatlang();
	index = 0;
	while (language[index] != 0)
	{
		if (creatnoeud(&(racine->next), language[index]) == -1)
		{
			free(racine);
			free(language);
			return (NULL);
		}
		index++;
	}
	free(language);
	return (racine);
}
