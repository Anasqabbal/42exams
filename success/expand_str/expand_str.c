#include <unistd.h>

static int it_is_last(char *s, int *i, int ac)
{
    if (ac != 2)
        return (-1);
    while (s[(*i)] == ' ' || s[(*i)] == '\t')
        (*i)++;
    if (s[(*i)] == '\0')
        return (-1);
    else
        return ((*i));
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    i = it_is_last(av[1], &i, ac);
    if (ac == 2 && i != -1)
    {
        while(av[1][i])
        {
            j = i;
            i = it_is_last(av[1], &i, ac);
            if (i == -1)
                break ;
            else if (j != i)
                write(1, "   ", 3);
            write (1, &av[1][i], 1);
            i++;
        }
    }
    return (write(1, "\n", 1), 0);
}