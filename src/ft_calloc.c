/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:09:18 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 12:44:44 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(t_size count, t_size size)
{
	unsigned int	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (ptr);
	while (size > 1)
	{
		ptr[size - 1] = 0;
		size--;
	}
	return (ptr);
}
