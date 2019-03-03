/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:18:46 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/11 08:57:10 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str1);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[i])
		{
			while ((str[j + i] == to_find[i]) && (to_find[i] != '\0'))
				i++;
			if (to_find[i] == '\0')
				return (&str1[j]);
			i = 0;
		}
		j++;
	}
	return (0);
}
