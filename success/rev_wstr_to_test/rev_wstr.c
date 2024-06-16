#include <unistd.h>
#include <stdio.h>

static int ft_strlen(char *s)
{
    int i = -1;
    while(s[++i]);
    return (i);
}

static void ft_putstr(char *s, int len)
{
    int i = -1;

    while(i++ < len)
        write(1, &s[i], 1);
}

static char *ft_strrchr(char *s, char c, int i)
{
    if (c == '\0' && s[i] == '\0')
        return (s + i);
    else
        i -= 1;
    while(i >= 0)
    {
        if (s[i] == c)
            return (s + i);
        i--;
    }
    return (NULL);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int len;
        char *w;
        int j;
        int w_l;
        int o_l;
        int i = 0;

        len = ft_strlen(av[1]);
        j = len;
        w_l = 0;
        while(j > 0)
        {   
            w = ft_strrchr(av[1], ' ', j);
            if (i == 0)
            {
                ft_putstr(w + 1, ft_strlen(w) - 1);
                j -= ft_strlen(w);
            }
            else
            {
                if (w)
                {
                    ft_putstr(w + 1, (ft_strlen(w) - o_l) - 1);
                    j -= (ft_strlen(w) - o_l);
                }
                else
                {
                    ft_putstr(av[1], j - 1);
                    j -= j;
                    continue;
                }
            }
            write(1, " ", 1);
            i++;
            o_l = ft_strlen(w);
        }
    }
    ft_putstr("\n", 1);
}
