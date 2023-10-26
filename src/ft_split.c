/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:31:25 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/26 14:17:01 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_onlyccheck(const char *s, char c)
{
	while (*s == c)
		s++;
	if (!s)
		return (0);
	return (1);
}

size_t	ft_splitcount(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			i++;
			while (*s == c)
				s++;
		}
		s++;
	}
	return (i);
}

static size_t	ft_splitlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i + 1);
		i++;
	}
	return (i + 1);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		v;
	int		h;
	int		i;

	v = ft_splitcount(s, c);
	tab = (char **)malloc(sizeof(char *) * v);
	if (!tab)
		return (NULL);
	if (ft_onlyccheck(s, c) == 0)
		return (tab);
	i = 0;
	h = 0;
	while (--v > 0)
	{
		if (h)
			i += ft_splitlen(&s[i], c);
		while (s[i] == c)
			i++;
		tab[h] = ft_substr(s, i, ft_splitlen(&s[i], c));
		h++;
	}
	return (tab);
}
