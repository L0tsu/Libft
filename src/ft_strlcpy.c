/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:55:41 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/18 13:57:01 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstlen)
{
	t_size	i;
	t_size	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	if (!dstlen)
		return (0);
	while (i < dstlen - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i == dstlen - 1 || !*src)
		dst[i] = '\0';
	return (ft_strlen(src));
}
