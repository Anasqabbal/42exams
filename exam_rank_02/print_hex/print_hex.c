#include <unistd.h>


int mini_atoi(char *s)
{
    int i = -1;
    int res;

    res = 0;
    while(s[++i] == ' ' || (s[i] >= 9 && s[i] <= 13));
    if (s[i] == '+')
        i++;
    while(s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - 48);
        i++;
    }
    return (res);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hexa(int nb)
{
    if (nb < 16)
    {
        if (nb < 10)
            ft_putchar(nb + 48);
        else
            ft_putchar(nb + 87);
    }
    else
    {
        print_hexa(nb / 16);
        print_hexa(nb % 16);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nb;

        nb = mini_atoi(av[1]);
        print_hexa(nb);
    }
    write(1, "\n", 1);
}