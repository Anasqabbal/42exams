#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static int ft_pgcd(int n1, int n2)
{
    int lim;
    int ind;
    int i;

    i = 1;
    ind = 1;
    if (n1 > n2)
        lim = n1;
    else
        lim = n2;
    while(i <= lim)
    {
        if (n1 % i == 0 && n2 % i == 0)
            ind = i;
        i++;
    }
    return (ind);
}

int main(int ac, char **av)
{

    if (ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        printf("%d\n", ft_pgcd(n1, n2));
    }
    else
       printf("\n");
}