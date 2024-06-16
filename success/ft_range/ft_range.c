
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int len;
    int *res;
    int i = 0;

    if (start < end)
    {
        len = end - start;
        res = malloc(sizeof(int) * (len + 2));
        if (!res)
            return (NULL);
        while(start <= end)
        {
            res[i] = start;
            i++;
            start++;
        }
    }
    else
    {
        len = start - end;
        res = malloc(sizeof(int) * (len + 2));
        if (!res)
            return (NULL);
        while(start >= end)
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return (res);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int ac, char **av)
// {
//     (void)ac;
//     int nb1 = atoi(av[1]);
//     int nb2 = atoi(av[2]);
//     int len;

//     int *res = ft_range(nb1, nb2);
//     if (nb1 < nb2)
//         len = nb2 - nb1;
//     else
//         len = nb1 - nb2;
//     int i = 0;

//     while(i <= len)
//     {
//         printf("%d", res[i++]);
//     }
//     printf("\n");
// }