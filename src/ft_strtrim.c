/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:47:53 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/26 12:26:57 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_trimlen(&s1[i], set) == 1 && s1[i])
		i++;
	while (ft_trimlen(&s1[j], set) == 1 && s1[j])
		j--;
	if (j == (i - (ft_strlen(set))))
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, i, j));
}
