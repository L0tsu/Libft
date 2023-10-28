#include <stdio.h>
#include <libc.h>
#include <ctype.h>
#include <strings.h>
#include "libft.h"
#include "colours.h"

void	printok(char *str)
{
	printf(""WHITE"%s - "GREEN""BOLD"OK"DEFAULT"\n", str);
}
void	printKO(char *str)
{
	printf(""WHITE"%s - "RED""BOLD"ft error"DEFAULT"\n", str);
}

void 	_isascii()
{
	unsigned char is_ascii = 0;
	printf(""BLUE"---- is_ascii ----"DEFAULT"\n");
	while (is_ascii < 127)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"is_ascii%d - "RED""BOLD"ft error char *{%d}"DEFAULT"\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 127)
		printf (""WHITE"decimal - "GREEN""BOLD"OK"DEFAULT"\n");
	is_ascii = 0000;
	while (is_ascii < 0177)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"octal%d - "RED""BOLD"ft error char *{%d}"DEFAULT"\n", is_ascii, is_ascii);break;}

			is_ascii++;
	}
	if (is_ascii == 0177)
		printf (""WHITE"octal - "GREEN""BOLD"OK"DEFAULT"\n");
	is_ascii = 0x00;
	while (is_ascii < 0x7f)
	{
		if (isascii(is_ascii) != ft_isascii(is_ascii))
			{printf (""WHITE"hex%d - "RED""BOLD"ft error char *{%d}"DEFAULT"\n", is_ascii, is_ascii);break;}
			is_ascii++;
	}
	if (is_ascii == 0x7f)
		printf (""WHITE"hex - "GREEN""BOLD"OK"DEFAULT"\n");
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
		printf (""WHITE"isalnum - "GREEN""BOLD"OK"DEFAULT"\n");
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
		printf (""WHITE"isdigit - "GREEN""BOLD"OK"DEFAULT"\n");
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
		printf (""WHITE"isalpha - "GREEN""BOLD"OK"DEFAULT"\n");
}
void	_strlen()
{
	char s[] = " gsdf;;;sd';\n\t\v\fasda aa daw acxcx278";
	if (strlen(s) == ft_strlen(s))
		printf (""WHITE"strlen - "GREEN""BOLD"OK"DEFAULT"\n");
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
		printf (""WHITE"isprint - "GREEN""BOLD"OK"DEFAULT"\n");
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
		printf (""WHITE"memset - "GREEN""BOLD"OK"DEFAULT"\n");

}
void	_bzero()
{
	char s[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do";
	bzero(s, 1);
	ft_bzero(s1, 1);
	if (!strcmp(s, s1))
		printf (""WHITE"bzero - "GREEN""BOLD"OK"DEFAULT"\n");
	else{
		printf (""WHITE"bzero - "RED""BOLD"ft error\n%s - %s\n", s, s1);
		printf ("%d\n", strcmp(s, s1));
	}
}
void	_memcpy()
{
	char	dst[50] = "..............";
	char	dst1[50] = "..............";

	memcpy(dst, "bonjour", 5);
	ft_memcpy(dst1, "bonjour", 5);
	if (!strcmp(dst, dst1))
		printf(""WHITE"memcpy - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf(""WHITE"memcpy - "RED""BOLD"ft error\n%s - %s\n"DEFAULT"", dst, dst1 );
}
void	_memmove()
{
	char	dst[20] = "hello";
	char	dst1[20] = "hello";

	memmove(dst+3, dst, 17);
	ft_memmove(dst1+3, dst1, 17);
	if (!strcmp(dst, dst1))
		printf(""WHITE"memmove - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf(""WHITE"memmove - "RED""BOLD"ft error\n%s - %s\n"DEFAULT"", dst, dst1 );
}
void	_strlcpy()
{
	char dst[50]="df";
	char dst1[50]="df";
	if (strlcpy(dst, "", 3) == ft_strlcpy(dst1, "", 3) && !strcmp(dst, dst1))
		printf(""WHITE"strlcpy - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf(""WHITE"strlcpy - "RED""BOLD"ft error\n%s - %s\n"DEFAULT"", dst, dst1 );
}
void	_strlcat()
{
	char dst[100] ="dfs";
	char dst1[100] ="dfs";
	int	i = strlcat(dst, "sdfsdsdffs", 20);
	int	j = ft_strlcat(dst1, "sdfsdsdffs", 20);
	if (!strcmp(dst, dst1) && i == j)
		printf(""WHITE"strlcat - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf(""WHITE"strlcat - "RED""BOLD"ft error\n%s - %s\n%d-%d\n"DEFAULT"", dst, dst1, i, j);
}
void	m_toupper()
{
	if (toupper('b') == ft_toupper('b'))
		printf(""WHITE"toupper - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf (""WHITE"toupper - "RED""BOLD"ft error"DEFAULT"\n");
}
void	m_tolower()
{
	if (tolower('B') == ft_tolower('B'))
		printf(""WHITE"tolower - "GREEN""BOLD"OK"DEFAULT"\n");
	else
		printf (""WHITE"tolower - "RED""BOLD"ft error"DEFAULT"\n");
}
void	_strchr()
{
	char str[] = "bonjour";
	if (strchr("bonjour", 1) == ft_strchr("bonjour", 1))
		printok("strchr");
	else {
		printKO("strchr");
		printf("%s - %s\n",strchr(str, 'b'), ft_strchr(str, 'b'));}
}
void	_strrchr()
{
	char str[] = "teste";
	if (strrchr(str, 't' + 256) == ft_strrchr(str, 't' + 256))
		{printok("strrchr");}
	else {
		printKO("strrchr");
		printf("%s - %s\n",strrchr(str, 'n'), ft_strrchr(str, 'n'));printf("%p - %p\n", strrchr(str, 't' + 256), ft_strrchr(str, 't' + 256));}
}
void	_strncmp()
{
	int i = 0;
	char s1[] = "bonjour";
	char s2[] = "bonjouR";
	if (strncmp(s1, s2, i) == ft_strncmp(s1, s2, i))
		printok("strncmp");
	else
		{printKO("strncmp");printf("%d - %d", strncmp(s1, s2, i), ft_strncmp(s1, s2, i));}
}
void	_memchr()
{
	char s[]="akjsdhgfkjaghsdfljahgsdkjfahgskdjfhagksdgaxfkjsdhfkajghsgdssgjdg";
	if (memchr(s, 'k', 1) == ft_memchr(s, 'k', 1))
		printok("memchr");
	else
		{printKO("memchr");printf("%s - %s\n",memchr(s, 'k', 1), ft_memchr(s, 'k', 1)); }
}
void	_memcmp()
{
	char str[] = "asdfasdfasdf";
	char str1[] = "asdfasdfasdfz";
	int i = 0;
	if (memcmp(str, str1, i) == ft_memcmp(str, str1, i))
		printok("memcmp");
	else{
		printKO("memcmp");printf("%d - %d\n", memcmp(str, str1, i),ft_memcmp(str, str1, i));}
}
void	_strnstr()
{
	char haystack[] = "Lorem ipsum dolo\nr sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char needle[] = "";
	int i = 10;
	if (strnstr(haystack, needle, i) == ft_strnstr(haystack, needle,i))
		printok("strnstr");
	else
	printf (""GREEN"%s\n"RED"%s\n", strnstr(haystack, needle, i), ft_strnstr(haystack, needle, i));
}
void	_atoi()
{
	char str0[] = "";
	char str1[] = "      \t\v\f\n";
	char str2[] = "      \t\v\f\n000";
	char str3[] = "....";
	char str4[] = "2147483647";
	char str5[] = "-2147483648";
	int i = 0;
	if (!(atoi(str0) == ft_atoi(str0)))
		{i++;printf("%d - %d\n", i, ft_atoi(str0));}
	else if (!(atoi(str1) == ft_atoi(str1)))
		{i++;printf("%d - %d\n", i, ft_atoi(str1));}
	else if (!(atoi(str2) == ft_atoi(str2)))
		{i++;printf("%d - %d\n", i, ft_atoi(str2));}
	else if (!(atoi(str3) == ft_atoi(str3)))
		{i++;printf("%d - %d\n", i, ft_atoi(str3));}
	else if (!(atoi(str4) == ft_atoi(str4)))
		{i++;printf("%d - %d\n", i, ft_atoi(str4));}
	else if (!(atoi(str5) == ft_atoi(str5)))
		{i++;printf("%d - %d\n", i, ft_atoi(str5));}
	if (!i)
		printok("atoi");
	else printKO("atoi");
}
void	_calloc()
{
	int len = 10;
	void *p1 = calloc(len, sizeof(char));
	void *p2 = ft_calloc(len, sizeof(char));
	if (p1 && p2)
		printok("calloc");
	else
		printKO("calloc");
}
void	_strdup()
{
	char *str = strdup("skjahdgf");
	char *str1 = ft_strdup("skjahdgf");
	if (!strcmp(str, str1))
		printok("strdup");
	else
		{printKO("strdup");printf("%s\n%s\n", str,str1);}
}
void	_substr()
{
	char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	int c = 16;
	int i = 150;
	char *ptr = ft_substr(str, c, i);
	printf("%s\n"BLUE"strlen = %d/%d\n", ptr, ft_strlen(ptr), i - 1);
}
void	_strjoin()
{
	char str[] = "Lorem ipsum dolor sit amet,";
	char join[] = " consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";

	char *conc = ft_strjoin(str, join);
	// printf("%s\n", conc);
	if ((strlen(conc) == strlen(str) + strlen(join)))
	printok("strjoin");
}
void	_strtrim()
{
	char s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char s2[] = "Lorem ipsum dolor sit amet, ";
	char *t = ft_strtrim(s1, s2);
	printf("%s\n", t);
}
void	_split()
{
	int i = 0;
	// char s[] = "Lorem ipsum dolor sit amet,,,,,,,,,,,,, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	// char s[] = ",,,,,";
	char s[] = "ssssssswahooskjhskjhskjhskjhs";
	char **tab = ft_split(s, 's');
	if (tab)
	{
		printf(""CYAN"------ft-split------"WHITE"\n");
		while (tab[i]){
			printf("%d |%s|\n", i, tab[i]);i++;}
		printf(""CYAN"--------------------"WHITE"\n");
	}
	if (!tab)
		printf(""RED""BOLD"things fucked up in split..\n");
}
int	main ()
{
	system("clear");
	// LIB C -----------------------------
	// _isalpha();
	// _isdigit();
	// _isalnum();
	// _isascii();
	// _strlen();
	// _isprint();
	// _bzero();
	// _memset();
	// _memcpy();
	// _memmove();
	// _strlcpy();
	// _strlcat();
	// m_toupper();
	// m_tolower();
	// _strchr();
	_strrchr();
	// _strncmp();
	// _memchr();
	// _memcmp();
	// _strnstr();
	// _atoi();
	// _calloc();
	// _strdup();
	// ------------------------------------
	// OTHER FUNCTIONS
	// _substr();
	// _strjoin();
	// _strtrim();
	// _split();
	// _itoa();
	// _strmapi();
	// _striteri();
	// _putchar_fd();
	// _putstr_fd();
	// _putendl_fd();
	// _putnbr_fd();
}
