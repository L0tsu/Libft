/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:30:26 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 15:46:20 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*conc;
	int		i;
	int		j;

	conc = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!conc)
		return (conc);
	i = 0;
	j = 0;
	while (s1[i])
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	conc[i] = '\0';
	return (conc);
}