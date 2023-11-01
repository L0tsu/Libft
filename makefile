# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julmorea <julmorea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:05:04 by julmorea          #+#    #+#              #
#    Updated: 2023/11/01 14:06:09 by julmorea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I.

CC = gcc

SRCS			=	ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c\
					ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c\
					ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c\
					ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c\
					ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c\
					ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c\
					ft_isascii.c ft_memmove.c ft_strdup.c ft_strnstr.c\
					ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c\


HEADER = libft.h

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJDIR = objs

SRCDIR = sources

BIN = bin

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) a.out
			
fclean:		clean
			rm -f $(NAME) libft.h.gch

re:			fclean $(NAME)

.PHONY: all re fclean clean

#other functions

git :
	@git add *.c *.h makefile
	@git commit -m "latest"
	@clear
	@echo "\033[1;34m\n----------------------------------------\n\
	§                                      §\n\
	§          COMMIT SUCCESSFUL           §\n\
	§                                      §\n\
	----------------------------------------\n"