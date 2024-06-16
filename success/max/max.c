// #include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int res;
    unsigned i = 0;

    res = 0;
    while(i < len)
    {
        if (res < tab[i])
            res = tab[i];
        i++;
    }
    return (res);
}

// int main()
// {
//     int len = 8;
//     int nb[8]= {1, 3, 5, 12312, 1, 0, 5, 90};

//     len = 8;
//      printf("your max == %d\n", max(nb, len));
// }