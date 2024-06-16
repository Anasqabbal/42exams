#include <unistd.h>

int ft_in(char *s, char c)
{
    int i = -1;
    while(s[++i])
    {
        if (s[i] == c)
            return (0);
    }
    return (1);
}

int ft_before(char *s, char c, int len)
{
    int i = -1;
    while(++i < len)
    {
        if (s[i] == c)
            return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = -1;
        while(av[1][++i])
        {
            if (!ft_in(av[2], av[1][i]) && ft_before(av[1], av[1][i], i))
                write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
}