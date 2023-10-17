#include <stdio.h>
#include <libc.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"
#include "colours.h"

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
unsigned int	ft_strlen(const char *s);
int				ft_isprint(int c);
void			*ft_memset(void *b, int c, size_x len);
void			*ft_bzero(void *s, size_x n);

void 	_isascii()
{
	unsigned char is_ascii = 0;
	printf("\033[0;34m---- is_ascii ----\n");
	while (is_ascii < 127)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"is_ascii%d - "RED""BOLD"ft error char *{%d}\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 127)
		printf (""WHITE"decimal - "GREEN""BOLD"OK\n");
	is_ascii = 0000;
	while (is_ascii < 0177)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"octal%d - "RED""BOLD"ft error char *{%d}\n", is_ascii, is_ascii);break;}

			is_ascii++;
	}
	if (is_ascii == 0177)
		printf (""WHITE"octal - "GREEN""BOLD"OK\n");
	is_ascii = 0x00;
	while (is_ascii < 0x7f)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"hex%d - "RED""BOLD"ft error char *{%d}\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 0x7f)
		printf (""WHITE"hex - "GREEN""BOLD"OK\n");
	printf("\033[0;34m------------------\n");
}
void	_isalnum()
{
	int i = 0;
		char is_alnum[] = "Lorem ipsum dolor sit 012345689\t\n";
	while (is_alnum[i])
	{
		if (isalnum(is_alnum[i]) != ft_isalnum(is_alnum[i]))
			{printf (""WHITE"is_alnum%d - "RED""BOLD"ft error char *{%c}\n", i, is_alnum[i]);break;}
		i++;
	}
	if (!is_alnum[i])
		printf (""WHITE"is_alnum - "GREEN""BOLD"OK\n");
}
void	_isdigit()
{
	int i = 0;
	char is_digit[] = "Lorem ipsum dolor sit 012345689\t\n";
	while (is_digit[i])
	{	
		if (ft_isdigit(is_digit[i]) != isdigit(is_digit[i]))
			{printf (""WHITE"is_digit%d - "RED""BOLD"ft error char *{%c}\n", i, is_digit[i]);break;}
		i++;
	}
	if (!is_digit[i])
		printf (""WHITE"is_digit - "GREEN""BOLD"OK\n");
}
void	_isalpha()
{
	int i = 0;
	char is_alpha[] = "Lorem ipsum dolor sit amet, consecte\n\ttur adipiscing elit,";
	while (is_alpha[i])
	{	
		if (ft_isalpha(is_alpha[i]) != isalpha(is_alpha[i]))
			{printf (""WHITE"isalpha%d - "RED""BOLD"ft error char *{%c}\n", i, is_alpha[i]);break;}
		i++;
	}
	if (!is_alpha[i])
		printf (""WHITE"is_alpha - "GREEN""BOLD"OK\n");
}
void	_strlen()
{
	char s[] = " gsdf;;;sd';\n\t\v\fasda aa daw acxcx278";
	if (strlen(s) == ft_strlen(s))
		printf (""WHITE"strlen - "GREEN""BOLD"OK\n");
	else
		printf (""WHITE"strlen - "RED""BOLD"ft error\n");
}
void	_isprint()
{
	int i = 0;
	char s[] = "df 3ew ssd a \t\nadfa sdas\178";
	while (s[i])
	{
		if (isprint(s[i]) != ft_isprint(s[i]))
		{printf (""WHITE"is_digit%d - "RED""BOLD"ft error char *{%c}\n", i, s[i]);break;}
		i++;
	}
	if (!s[i])
		printf (""WHITE"is_print - "GREEN""BOLD"OK\n");
}
void	_memset()
{
	char str[] = "            ";
	char str1[] = "            ";
	memset(str, '.', 13);
	ft_memset(str1, '.', 13);
	if (strncmp(str, str1, 13))
		printf (""WHITE"memset - "RED""BOLD"ft error\n"GREEN""BOLD"%d\n", strcmp(str, str1));
	else
		printf (""WHITE"memset - "GREEN""BOLD"OK\n");

}
void	_bzero()
{
	char s[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	bzero(s, 1);
	ft_bzero(s1, 1);
	if (!strcmp(s, s1))
		printf (""WHITE"bzero - "GREEN""BOLD"OK\n");
	else{
		printf (""WHITE"bzero - "RED""BOLD"ft error\n%s - %s\n", s, s1);
		printf ("%d\n", strcmp(s, s1));
	}
}

int	main ()
{
	system("clear");
	/* isalpha */
	_isalpha();
	/* isdigit */
	_isdigit();
	/* isalnum */
	_isalnum();
	/* isascii */
	_isascii();
	/* strlen */
	_strlen();
	/* isprint */
	_isprint();
	/* memset */
	_memset();
	/* bzero */
	_bzero();
}
