
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

void ft_putnbr(int nb, int *ret)
{
    unsigned int n;

    n = nb;
    if (nb < 0)
    {
        *ret += ft_putchar('-');
        n = nb * -1;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10, ret);
        ft_putnbr(n % 10, ret);
    }
    else
        *ret += ft_putchar(n + 48);
}

void ft_puthex(unsigned int n, int *ret)
{
    if (n > 15)
    {
        ft_puthex(n / 16, ret);
        ft_puthex(n % 16, ret);
    }
    else
    {
        if (n > 9)
            *ret += ft_putchar(n + 87);
        else
            *ret += ft_putchar(n + 48);
    }
}

int ft_putstr(char *s)
{
    int i = -1;
    if (!s)
        return (ft_putstr("(null)"));
    while(s[++i])
        ft_putchar(s[i]);
    return (i);
}


int ft_printf(const char *s, ... )
{
    va_list arg;
    int     ret;

    va_start(arg, s);
    int i = -1;
    ret = 0;
    while(s[++i])
    {
        if (s[i] == '%')
        {
            i++;
            if (s[i] == 'd')
                ft_putnbr(va_arg(arg, int), &ret);
            else if (s[i] == 's')
                ret += ft_putstr(va_arg(arg, char *));
            else if (s[i] == 'x')
                ft_puthex(va_arg(arg, int), &ret);
        }
        else
            ret += ft_putchar(s[i]);
    }
    va_end(arg);
    return (ret);
}

// int main()
// {
//     int re;
//     int re2;
//     re = 0;
//     re2 = 0;
//     // char *n = NULL;
//         re = ft_printf("--Format--- %d %d %d %x %d %d\n", 0, 42, 1, -214748364, -2147483647, 2147483647);
//           re2 = printf("--Format--- %d %d %d %x %d %d\n", 0, 42, 1, -214748364, -2147483647, 2147483647);
//         printf("number of chars that you print ORIGINE = %d, YOURS  = %d\n", re2, re);
// }