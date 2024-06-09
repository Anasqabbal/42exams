#include <stdlib.h>

int ft_strlen(int *s)
{
    int i = -1;
    while(s[++i]);
    return (i);
}

char    *ft_strdup(char *src)
{
    if (!src)
        return (src);
    int len;
    int i = -1;

    len = ft_strlen(src);
    char *res = malloc(sizeof(char) * (len + 1));
    if (!res) 
        return (NULL);
    while(src[++i])
        res[i] = src[i];
    res[len] = NULL;
    return (res);
}