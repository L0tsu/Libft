CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_bzero.c   ft_isdigit.c ft_memset.c  ft_strlen.c  libft.h\
		ft_isalnum.c ft_isprint.c ft_strchr.c  ft_strrchr.c\
		ft_isalpha.c ft_memcpy.c  ft_strlcat.c ft_tolower.c\
		ft_isascii.c ft_memmove.c ft_strlcpy.c ft_toupper.c\

HEADER = libft.h

NAME = libft.a

OBJS = $(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS) a.out

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

test:	
		gcc $(CFLAGS) -o a.out libft_main_test.c $(OBJS)
		@./a.out

git :
	@git add *.c *.h src makefile
	@git commit -m "latest"
	@clear
	@echo "\033[1;34m\n----------------------------------------\n\
	§                                      §\n\
	§          COMMIT SUCCESSFUL           §\n\
	§                                      §\n\
	----------------------------------------\n"