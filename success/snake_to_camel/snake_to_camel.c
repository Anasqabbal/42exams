#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int      ft_strlen(char *s)
{
    int i = -1;
    while(s[++i]);
    return (i);
}

static int     calcule_under(char *s)
{
    int i = -1;
    int len = 0;
    while(s[++i])
    {
        if (s[i] == '_')
            len++;
    }
    return (len);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int len1 = calcule_under(av[1]);
        int len2 = ft_strlen(av[1]);
        int i = -1;
        int j = 0;
        int ind = 0;
        char *res = malloc(sizeof(char) * (len2 - len1) + 1);
        if (!res)
            return (1);
        while(j < (len2 - len1))
        {
            i++;
            if (av[1][i] == '_')
                ind = 1;
            else if (av[1][i] != '_')
            {
                if (ind && (av[1][i] >= 97 && av[1][i] <= 122))
                    res[j] = (av[1][i] - 32);
                else
                    res[j] = av[1][i];
                ind = 0;
                j++;
            }
        }
       res[len2 - len1] = '\0';
        i = -1;
        while(res[++i])
            write(1, &res[i], 1);
        free(res);
    }
    write(1, "\n", 1);
}