#ifndef LIBFT_H

typedef unsigned long long int t_size;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *s);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, t_size len);
void			ft_bzero(void *s, t_size n);
void 			*ft_memcpy(void *restrict dst, const void *restrict src, t_size n);

#endif