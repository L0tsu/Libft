/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:29:25 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/28 17:16:30 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	j;
	size_t	og;

	j = 0;
	if (!dst)
		return (ft_strlen(src) + dstlen);
	i = ft_strlen(dst);
	og = i;
	while (src[j] && (i < dstlen - 1) && dstlen)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstlen)
		dst[i] = '\0';
	if (og < dstlen)
		return (ft_strlen(src) + og);
	return (dstlen + ft_strlen(src));
}
