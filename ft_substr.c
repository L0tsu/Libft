/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:19:16 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/31 13:23:27 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*p;
	char		*sub;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(start > ft_strlen(s)))
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		sub = malloc(sizeof(char) * len + 1);
		if (!sub)
			return (sub);
		p = s;
		while (p[start + i] && i < len)
		{
			sub[i] = p[start + i];
			i++;
		}
		sub[i] = '\0';
	}
	else
		return (ft_strdup(""));
	return (sub);
}
