/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:30:26 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/28 17:30:38 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*conc;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	conc = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!conc)
		return (conc);
	i = ft_strlen(s1);
	ft_strlcpy(conc, s1, i + 1);
	ft_strlcpy(conc + i, s2, (ft_strlen(s2) + 1));
	return (conc);
}
