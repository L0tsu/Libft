/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:53:51 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/18 13:56:39 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long long int	t_size;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *s);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, t_size len);
void			ft_bzero(void *s, t_size n);
void			*ft_memcpy(void *dst, const void *src, t_size n);
void			*ft_memmove(void *dst, const void *src, t_size len);
t_size			ft_strlcpy(char *dst, const char *src, t_size dstlen);
t_size			ft_strlcat(char *dst, const char *src, t_size dstlen);

#endif