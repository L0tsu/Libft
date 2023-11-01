/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:17:20 by lotus             #+#    #+#             */
/*   Updated: 2023/11/01 14:24:37 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dst)
		return (NULL);
	else if (!src)
		return (dst);
	s = src;
	d = dst;
	while (n && s)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dst);
}
