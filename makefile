CFLAGS = -Wall -Wextra -Werror

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c   ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c ft_strchr.c ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c  \
					ft_memmove.c ft_strdup.c  ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_strjoin.c ft_strtrim.c \
#					ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_itoa.c ft_memccpy.c

HEADER = libft.h

NAME = libft.a

OBJS = $(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			ar -r -c -s $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) a.out
			
fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

test:	
		@gcc $(CFLAGS) -o a.out libft_main_test.c $(OBJS)
		@./a.out

git :
	@git add *.c *.h makefile
	@git commit -m "latest"
	@clear
	@echo "\033[1;34m\n----------------------------------------\n\
	§                                      §\n\
	§          COMMIT SUCCESSFUL           §\n\
	§                                      §\n\
	----------------------------------------\n"