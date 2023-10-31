/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:16:13 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/31 12:30:56 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec(long long int nb, int fd)
{
	if (nb == 0)
		return ;
	rec(nb / 10, fd);
	nb = nb % 10 + 48;
	write (fd, &nb, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nb;

	nb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 0)
		rec(nb, fd);
	else if (nb == 0)
		write(fd, "0", 1);
}
