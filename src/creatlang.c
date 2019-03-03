/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatlang.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 18:40:41 by abourenn          #+#    #+#             */
/*   Updated: 2019/02/10 16:46:07 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**creatlang2(char **lang)
{
	lang[16] = ft_strdup("..\n.#..\n.##\0");
	lang[17] = ft_strdup(".\n..#.\n..##\0");
	lang[18] = ft_strdup("#..\n.#..\n.#\0");
	lang[19] = ft_strdup("#.\n..#.\n..#\0");
	lang[20] = ft_strdup("#\n...#\n...#\0");
	lang[21] = ft_strdup("##.\n#\0");
	lang[22] = ft_strdup("##\n.#\0");
	lang[23] = ft_strdup("...\n##..\n#\0");
	lang[24] = ft_strdup("..\n.##.\n.#\0");
	lang[25] = ft_strdup(".\n..##\n..#\0");
	lang[26] = ft_strdup("..\n##..\n.#\0");
	lang[27] = ft_strdup("\n..##\n...#\0");
	lang[28] = ft_strdup(".\n.##.\n..#\0");
	lang[29] = ft_strdup("..\n###\0");
	lang[30] = ft_strdup(".\n.###\0");
	lang[31] = ft_strdup("##.\n.#\0");
	lang[32] = ft_strdup("##\n..#\0");
	lang[33] = ft_strdup("..\n.#..\n##\0");
	return (lang);
}

static char	**creatlang3(char **lang)
{
	lang[34] = ft_strdup(".\n..#.\n.##\0");
	lang[35] = ft_strdup("\n...#\n..##\0");
	lang[36] = ft_strdup("#.\n.#..\n.#\0");
	lang[37] = ft_strdup("#\n..#.\n..#\0");
	lang[38] = ft_strdup("#..\n#...\n#\0");
	lang[39] = ft_strdup("...\n###\0");
	lang[40] = ft_strdup("..\n.###\0");
	lang[41] = ft_strdup("##.\n..#\0");
	lang[42] = ft_strdup("##\n...#\0");
	lang[43] = ft_strdup("#..\n.##\0");
	lang[44] = ft_strdup("#.\n..##\0");
	lang[45] = ft_strdup("..\n##..\n#\0");
	lang[46] = ft_strdup(".\n.##.\n.#\0");
	lang[47] = ft_strdup("\n..##\n..#\0");
	lang[48] = 0;
	return (creatlang2(lang));
}

char		**creatlang(void)
{
	char	**lang;

	lang = (char**)malloc(sizeof(char*) * 49);
	lang[0] = ft_strdup("#\n.##\0");
	lang[1] = ft_strdup("#.\n##\0");
	lang[2] = ft_strdup(".\n..##\n...#\0");
	lang[3] = ft_strdup("..\n.##.\n..#\0");
	lang[4] = ft_strdup("...\n##..\n.#\0");
	lang[5] = ft_strdup("#..\n##\0");
	lang[6] = ft_strdup("#.\n.##\0");
	lang[7] = ft_strdup("#\n..##\0");
	lang[8] = ft_strdup("###\0");
	lang[9] = ft_strdup("...\n#...\n#...\n#\0");
	lang[10] = ft_strdup("\n...#\n...#\n...#\0");
	lang[11] = ft_strdup(".\n..#.\n..#.\n..#\0");
	lang[12] = ft_strdup("..\n.#..\n.#..\n.#\0");
	lang[13] = ft_strdup(".\n###\0");
	lang[14] = ft_strdup("\n.###\0");
	lang[15] = ft_strdup("...\n#...\n##\0");
	return (creatlang3(lang));
}
