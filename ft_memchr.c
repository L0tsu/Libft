/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:43:53 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/28 18:05:21 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		i;

	p = (char *)s;
	i = 0;
	while (n--)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (0);
}
