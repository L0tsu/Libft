/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lotus <lotus@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:17:20 by lotus             #+#    #+#             */
/*   Updated: 2023/10/17 16:26:33 by lotus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, t_size n)
{
	const char 	*s;
	char 		*d;

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