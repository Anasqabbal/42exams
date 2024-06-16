#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 10)
    {
        ft_putchar(nb + 48);
        return ;
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

unsigned int mini_atoi(char *s)
{
    int i = 0;
    int res;

    while((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
        i++;
    while(s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10  + (s[i] - '0');
        i++;
    }
    return (res);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int res = mini_atoi(av[1]);
        int i = 1;
        int j;
        int res2;

        while(i < 10)
        {
            j = -1;
            res2 = i * res;
            ft_putchar(i + 48);
            ft_putchar(' ');
            ft_putchar('x');
            ft_putchar(' ');
            while(av[1][++j])
                ft_putchar(av[1][j]);
            ft_putchar(' ');
            ft_putchar('=');
            ft_putchar(' ');
            ft_putnbr(res2);
            write(1, "\n", 1);
            i++;
        }

    }
    else
        write(1, "\n", 1);
}