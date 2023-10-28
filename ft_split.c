/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:31:25 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/28 16:31:03 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitcount(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	len;
	size_t	v;

	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_splitcount(s, c) + 1));
	if (!tab)
		return (NULL);
	v = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s != c && *s && ++len)
				s++;
			tab[v++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	tab[v] = 0;
	return (tab);
}
