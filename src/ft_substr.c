/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:19:16 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:49:18 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*p;
	char		*sub;
	size_t		i;

	i = 0;
	sub = malloc(sizeof(char) * len);
	if (!sub)
		return (sub);
	p = s;
	while (p[start] && i < len - 1)
	{
		sub[i] = p[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
