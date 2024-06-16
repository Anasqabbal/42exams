#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
    int res[8];
    int i = 7;

    while(octet)
    {
        res[i] = octet % 2;
        octet /= 2;
        i--;
    }
    while(i >= 0)
        res[i--] = 0;
    int j = 0;
    while(j < 8)
    {
        ft_putchar(res[j] + 48);
        j++;
    }
}

// int main(int ac, char **av)
// {
//     if (ac)
//         print_bits(atoi(av[1]));
// }