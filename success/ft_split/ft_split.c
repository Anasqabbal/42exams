#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_c_w(char *s, int ind)
{
    int i = 0;
    int len = 0;

    while(s[i] == ' ' || s[i] == '\t')
        i++;
    while(s[i] && ind == 0)
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'
             && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0' || s[i + 1] == '\n'))
            len++;
        i++;
    }
    while(s[i] != ' ' && s[i] != '\t' && s[i] && ind == 1 && s[i] != '\n')
    {
        i++;
        len++;
    }
    return (len);
}

int ft_strlen(char *s)
{
    int i = -1;
    while(s[++i]);
    return (i);
}

char *ft_cpy(char *dst, char *src, int len)
{
    int i = 0;

    while(i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[len] = '\0';
    return (dst);
}

char    **ft_split(char *str)
{
    int i = 0;
    int len1 = 0;
    int len2 = 0;
    int j = 0;
    int f_len;
    char **res;

    f_len = ft_strlen(str);
    if (f_len == 0)
    {
        res = malloc(sizeof(char *) * 2);
        if (!res)
            return (0);
        res[0] = 0;
        res[1] = 0;
        return (res);
    }
    else
    {
        len1 = ft_c_w(str, 0);
        res = malloc(sizeof(char *) * (len1 + 1));
        if (!res)  
            return (0);
        res[len1] = NULL;
        while(i < f_len)
        {
           while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
                i++;
            if (!str[i])
                break ;
            len2 = ft_c_w(str + i, 1);
            res[j] = malloc(sizeof(char) * (len2 + 1));
            if (!res[j])
                return (0);
            ft_cpy(res[j], str + i, len2);
            j++;
            i += len2;
        }
        return (res);
    }
}

// void ft_putstr(char *s)
// {
//     if (!s)
//         return ;
//     int i  = -1;
//     while(s[++i])
//         write(1, &s[i], 1);
// }

// // int main(int ac, char **av)
// // {
// //     if (ac)
// //     {
// //         char **res;

// //         res = ft_split(av[1]);

// //         int i = 0;

// //         while(res[i])
// //         {
// //             ft_putstr(res[i]);
// //             write(1, "\n", 1);
// //             i++;
// //         }
// //         //printf("%s\n", res[i]);
// //     }
// // }