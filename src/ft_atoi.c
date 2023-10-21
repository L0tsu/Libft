/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:30:49 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:28:46 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	negative;
	int	p;

	i = 0;
	negative = 1;
	p = ft_isspace(str);
	if (str[p] == '-')
	{
		negative = -negative;
		p++;
	}
	while (str[p] >= '0' && str[p] <= '9')
	{
		i += (str[p] - 48);
		p++;
		if (str[p] >= '0' && str[p] <= '9')
			i *= 10;
	}
	return (i * negative);
}
