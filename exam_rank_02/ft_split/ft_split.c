#include <stdlib.h>
#include <stdio.h>

int c_w(char *s, int ind)
{
	int i = -1;
	int len;

	len = 0;
	while(s[++i] && ind == 0)
	{
		if ((s[i] != '\t' && s[i] != ' ' && s[i] != '\n') && (s[i + 1] == '\t' || s[i + 1] == '\n' || s[i + 1] == ' ' || !s[i + 1]))
			len++;
	}
	i = -1;
	while(s[++i]  && s[i] != '\t' && s[i] != ' ' && s[i] != '\n' && ind == 1)
		len++;
	return (len);
}

int ft_strlen(char *s)
{
	int i = -1;
	while(s[++i]);
	return (i);
}

char *ft_strcpy(char *dst, char *src, int len)
{
	int i = -1;
	while(++i < len)
		dst[i] = src[i];
	dst[len] = '\0';
	return (dst);
}

char    **ft_split(char *str)
{
	char **res;

	if (str[0] == '\0')
	{
		res = malloc(sizeof(char *) * (1));
		if (!res)
			return (NULL);
		res[0] = NULL;
	}
	else
	{
		int len;
		int len2;
		int i = 0;
		int f_l  ;
		int k = 0;

		len = c_w(str, 0);
		res = malloc(sizeof(char *) * (len + 1));
		if (!res)
			return (NULL);
		res [len] = NULL;
		f_l = ft_strlen(str);
		while(i < f_l)
		{
			while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			if (str[i] == '\0')
				break;
			len2 = c_w(str + i, 1);
			res[k] = malloc(sizeof(char) * (len2 + 1));
			if (!res[k])
				return (NULL);
			ft_strcpy(res[k], str + i, len2);
			k++;
			i += len2;
		}
	}
	return (res);
}

// int main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		char **res = ft_split(av[1]);
// 		int i = -1;
// 		while(res[++i])
// 			printf("-->%s<--\n", res[i]);
// 		i = -1;
// 		if (res)
// 		{
// 			while(res[++i])
// 				free(res[i]);
// 			free(res);
// 		}
// 	}
// }