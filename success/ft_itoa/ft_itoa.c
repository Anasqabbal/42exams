#include <stdlib.h>
#include<stdio.h>

int ft_len(int n)
{
    int i = 0;
    unsigned int nb;

    if (n < 0)
    {
        i = 1;
        nb = n * -1;
    }
    else
        nb = n;
    while(nb)
    {
        i++;
        nb /= 10;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    if (nbr == 0)
    {
        char *res;
        res = malloc(sizeof(char) * 2);
        if (!res)
            return (NULL);
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
    else
    {
        int len;
        char *res;
        unsigned int n;

        len = ft_len(nbr);
        res = malloc(sizeof(char) * (len + 1));
        if (!res)
            return (NULL);
        res[len--] = '\0';
        if (nbr < 0)
        {
            res [0] = '-';
            n = nbr * -1;
        }
        else
            n = nbr;
        while(n)
        {
            res[len] = (n % 10) + 48;
            len--;
            n /= 10;
        }
        return (res);
    }
}


// int main(int ac, char **av)
// {
//      int len;

//      if (ac)
//      {
//             len = ft_len(atoi(av[1]));
//             int i = 0;
//             char *res;

//             res = ft_itoa(atoi(av[1]));

//             while(i < len)
//             {
//                 printf("%c", res[i++]);
//             }
//             printf("\n");
//      }
// }