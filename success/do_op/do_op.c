#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 1)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[3]);
        int res = 0;

        if (av[2][0] == '-')
            res = n1 - n2;
        if (av[2][0] == '*')
            res = n1 * n2;
        if (av[2][0] == '+')
            res = n1 + n2;
        if (av[2][0] == '/')
            res = n1 / n2;
        if (av[2][0] == '%')
            res = n1 % n2;
        printf("%d\n", res);
    }
    else
        write(1, "\n", 1);
}