/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:17:20 by lotus             #+#    #+#             */
/*   Updated: 2023/10/18 13:55:33 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	const char	*s;
	char		*d;

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
