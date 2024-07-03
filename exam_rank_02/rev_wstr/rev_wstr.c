#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putstr(char *s)
{
	int i = -1;
	while(s[++i])
		write(1, &s[i], 1);
}

int ft_strlen(char *s)
{
	int i = -1;
	while(s[++i]);
	return (i);
}
char *ft_cpy(char *dst, char *src, int len)
{
	int i = -1;
	while(++i < len)
		dst[i] = src[i];
	dst[len] = '\0';
	return (dst);
}

int ft_7sb(char *s, int ind)
{
	int i = -1;
	int len = 0;
	while(ind == 0 && s[++i])
	{
		if ((s[i] != ' ' && s[i] != '\t') && (s[i + 1] == ' ' || s[i + 1] == '\t' || !s[i + 1]))
			len++;
	}
	i = -1;
	while(ind  == 1 && s[++i] && s[i] != ' ' && s[i] != '\t')
			len++;
	return (len);
}

char **split_str(char *s)
{
	int i = 0;
	int k = 0;
	int f_l = ft_strlen(s);
	int c_w ;
	int len2 = 0;
	char **res;


	if (f_l == 0)
	{
		res = malloc(sizeof(char *) * (2));
		if (!res)
			return (NULL);
		res[0] = NULL;
		res[1] = NULL;
	}
	else
	{
		c_w = ft_7sb(s, 0);
		res = malloc(sizeof(char *) * (c_w + 1));
		if (!res)
			return (NULL);
		while(i < f_l)
		{
			while(s[i] == ' ' || s[i] == '\t')
				i++;
			len2 = ft_7sb(s + i, 1);
			res[k] = malloc(sizeof(char) * (len2 + 1));
			if (!res[k])
				return (NULL);
			ft_cpy(res[k], s + i, len2);
			k++;
			i += len2;
		}
	}
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char **res = split_str(av[1]);
		int len = ft_7sb(av[1], 0);
		while(--len >= 0)
		{
			ft_putstr(res[len]);
			if (len)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
