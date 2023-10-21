/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:53:51 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 11:11:33 by julmorea         ###   ########.fr       */
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
int				ft_toupper(int c);
int				ft_tolower(int c);
const char		*ft_strchr(const char *str, int c);
const char		*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *s1, const char *s2, t_size n);
const char		*ft_memchr(const void *s, int c, t_size n);
int				ft_memcmp(const void *s1, const void *s2, t_size n);
char			*ft_strnstr(const char *haystack, const char *needle, t_size len);

#endif