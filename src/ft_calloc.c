/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:09:18 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:27:21 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (ptr);
	while (count > 1)
	{
		ptr[count - 1] = 0;
		count--;
	}
	return (ptr);
}
