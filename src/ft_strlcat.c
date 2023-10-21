/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:29:25 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:28:34 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	int	i;
	int	j;
	int	og;

	j = 0;
	i = ft_strlen(dst);
	og = i;
	while (src[j] && i < dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i == dstlen)
	{
		dst[i] = '\0';
		return (ft_strlen(dst));
	}
	else if (og < dstlen)
		return (ft_strlen(src) + og);
	return (dstlen + ft_strlen(src));
}
