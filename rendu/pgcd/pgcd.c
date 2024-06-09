#include <unistd.h>
#include <libc.h>

int gcd(int nb1, int nb2)
{
    int i;
    int gcd;
    int lim;

    if (nb1 > nb2)
        lim = nb1;
    else
        lim = nb2;
    i = 1;
    while(i <= lim)
    {
        if (((nb1 % i) == 0))
        {
            if (((nb2 % i) == 0))
                gcd = i;
        }
        i++;
    }
    return (gcd);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int nb1;
        int nb2;

        nb1 = atoi(av[1]);
        nb2 = atoi(av[2]);
        printf("%d\n", gcd(nb1, nb2));
    }
    else
        write(1, "\n", 1);
}