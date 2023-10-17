CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isprint.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlen.c ft_isascii.c ft_bzero.c

HEADER = libft.h

NAME = libft

OBJ = $(SRCS).o

$(NAME) = gcc $(CFLAGS) src/$(SRCS)