/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:55:41 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:28:35 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	dlen;

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
