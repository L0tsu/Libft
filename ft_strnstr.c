/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:05:42 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/31 13:03:49 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	needlefinder(const char *haystack, const char *needle)
{
	int	t;

	t = 0;
	while ((needle[t] == haystack[t]) && needle[t])
		t++;
	if (!needle[t])
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (needlefinder(&haystack[i], &needle[0]) == 0 && i
				+ ft_strlen(needle) <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
