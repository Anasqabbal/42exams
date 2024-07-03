#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len = -1;

	while(src[++len]);
	char *res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	int i = -1;
	while(src[++i])
		res[i] = src[i];
	res[len] = '\0';
	return (res);	
}