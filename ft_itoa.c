/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:13:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/29 00:13:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_mallen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n/10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char *re;
	size_t i;

	re = malloc(sizeof(char) * (ft_mallen(n) + 1));
	if (!re)
		return(NULL);
	ft_bzero(re, ft_mallen(n) + 1);
	i = 0;
	if (n < 0)
	{
		re[0] = '-';
		if (n == INT_MIN)
			n += 1;
		n = -n;
	}
	return(re);
}

int main()
{
	char *p = ft_itoa(-100000000);
	printf("%s\n", p);
}