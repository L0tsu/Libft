/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:13:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 10:47:45 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_recitoa(char *re, int n, int i)
{
	if (n)
	{
		re[i] = (n % 10) + 48;
		return (ft_recitoa(re, (n / 10), i - 1));
	}
	return (0);
}

static int	ft_mallen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*re;
	int		i;

	re = malloc(sizeof(char) * (ft_mallen(n) + 1));
	if (!re)
		return (NULL);
	if (n == -2147483648)
	{
		re = "-2147483648";
		return (re);
	}
	i = ft_mallen(n) - 1;
	re[i--] = '\0';
	if (n < 0)
	{
		re[0] = '-';
		n = -n;
	}
	else if (n == 0)
		re[0] = '0';
	ft_recitoa(re, n, i);
	return (re);
}
