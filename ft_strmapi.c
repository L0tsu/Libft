/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:45:50 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/31 12:00:08 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*re;
	unsigned int	i;

	i = 0;
	re = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!re)
		return (NULL);
	while (s[i])
	{
		re[i] = f(i, (char)s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
