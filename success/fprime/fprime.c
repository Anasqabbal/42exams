#include <stdio.h>
#include <stdlib.h>

int it_is_prime(int nb)
{
    int i = 2;

    while(i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 2;
        int nb = atoi(av[1]);
        int f = 0;

        while(i <= nb)
        {
            if (nb % i == 0 && it_is_prime(i))
            {
                if (f == 0)
                    printf("%d", i);
                else
                    printf("*%d", i);
                nb = nb / i;
                f = 1;
            }
            else
                i++;
        }  
    }
   printf("\n");
}