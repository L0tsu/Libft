/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:40:24 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/18 13:53:14 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (len && *s)
	{
		*d = *s;
		len--;
		d++;
		s++;
	}
	if (len)
	{
		*d = 0;
		len--;
	}
	return (dst);
}
