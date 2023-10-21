/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:53:51 by julmorea          #+#    #+#             */
/*   Updated: 2023/10/21 13:49:06 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int								ft_isalpha(int c);
int								ft_isdigit(int c);
int								ft_isalnum(int c);
int								ft_isascii(int c);
unsigned int					ft_strlen(const char *s);
int								ft_isprint(int c);
void							*ft_memset(void *b, int c, size_t len);
void							ft_bzero(void *s, size_t n);
void							*ft_memcpy(void *dst, const void *src,
									size_t n);
void							*ft_memmove(void *dst, const void *src,
									size_t len);
size_t							ft_strlcpy(char *dst, const char *src,
									size_t dstlen);
size_t							ft_strlcat(char *dst, const char *src,
									size_t dstlen);
int								ft_toupper(int c);
int								ft_tolower(int c);
const char						*ft_strchr(const char *str, int c);
const char						*ft_strrchr(const char *str, int c);
int								ft_strncmp(const char *s1, const char *s2,
									size_t n);
const char						*ft_memchr(const void *s, int c, size_t n);
int								ft_memcmp(const void *s1, const void *s2,
									size_t n);
char							*ft_strnstr(const char *haystack,
									const char *needle, size_t len);
int								ft_atoi(const char *str);
void							*ft_calloc(size_t count, size_t size);
char							*ft_strdup(const char *src);
char							*ft_substr(char const *s, unsigned int start, size_t len);

#endif