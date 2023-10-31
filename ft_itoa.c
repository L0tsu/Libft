/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:13:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 11:41:12 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_recitoa(char *re, long long int n, int i)
{
	if (n)
	{
		re[i] = (n % 10) + 48;
		return (ft_recitoa(re, (n / 10), i - 1));
	}
	return (0);
}

static int	ft_mallen(long long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
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
	char			*re;
	size_t			i;
	long long int	nb;

	nb = n;
	re = malloc(sizeof(char) * (ft_mallen(nb)));
	if (!re)
		return (NULL);
	i = ft_mallen(nb) - 1;
	re[i--] = '\0';
	if (nb < 0)
	{
		re[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		re[0] = '0';
	ft_recitoa(re, nb, i);
	return (re);
}
