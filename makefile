CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isprint.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_strlen.c ft_isascii.c ft_bzero.c\

HEADER = libft.h

NAME = libft

git :
	@git add *.c *.h src makefile
	@git commit -m "latest"
	@echo "\n_____\033[1;36mGit commit successful\033[0;37m_____"