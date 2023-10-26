/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:43:53 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:22:53 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	int			i;

	p = s;
	i = 0;
	while (p[i] && n--)
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (0);
}
