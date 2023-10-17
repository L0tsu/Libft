#ifndef LIBFT_H

typedef unsigned long long int size_x;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *s);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, size_x len);
void			ft_bzero(void *s, size_x n);

#endif