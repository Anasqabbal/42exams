#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int f_w(char *s)
{
    int i = 0;
    int len;

    len = 0;
    while((s[i] == ' ' || s[i] == '\t') && s[i])
        i++;
    while((s[i] != ' ' && s[i] != '\t') && s[i])
    {
        len++;
        i++;
    }
    return (len);
}

int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 0;
        int j = 0;
        int ind = 0;
        char *res;
        int len;

        len = f_w(av[1]);
        res = malloc(sizeof(char) * (len + 1));
        if (!res)
            return (1);
        while(av[1][i])
        {
                while((av[1][i] == ' ' || av[1][i] == '\t'))
                    i++;
                while(av[1][i] != ' ' && av[1][i] !='\t' && av[1][i] && ind == 0)
                {
                    res[j] = av[1][i];
                    i++;
                    j++;
                    if (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
                    {
                        ind = 1;
                        res[len] = '\0';
                        break ;
                    }
                }
                if (av[1][i] == '\0')
                    break ;
                if (av[1][i] == ' ' || av[1][i] == '\t')
                    continue ;
                if (av[1][i] != ' ' && av[1][i] != '\t')
                    write(1, &av[1][i], 1);
                i++;
                if (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0')
                    write(1, " ", 1);
        }
        i = -1;
        while(res[++i])
            write(1, &res[i], 1);
        free(res);
    }
    write(1, "\n", 1);
}