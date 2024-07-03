#include <unistd.h>

static int ft_strlen(char *s)
{
    int i = -1;
    while(s[++i]);
    return (i);
}


int main(int ac, char **av)
{
    if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
    {
        int i = -1;
        while(av[1][++i])
        {
            if (av[1][i] == av[2][0])
                write(1, &av[3][0], 1);
            else
                write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
}