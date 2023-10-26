/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:51:01 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/26 16:28:17 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (!c)
		return ((char *)&str[i + 1]);
	while (str[i] != c && i)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
