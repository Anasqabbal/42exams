#include <unistd.h>
#include <stdio.h>

void    to_lower(char **av)
{
    int i = 0;
    int j = -1;

    while(av[++i])
    {
        j = -1;
        while(av[i][++j])
        {
            if (av[i][j] >= 65 && av[i][j] <= 90)
                av[i][j] += 32;
        }
    }
}


int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 1;
        int j;
        to_lower(av);
        while(i < ac)
        {
            j = -1;
            while(av[i][++j])
            {
                if ((av[i][j] != ' ' && av[i][j] != '\t') && (av[i][j + 1] == '\t' || av[i][j + 1] == ' ' || av[i][j + 1] == '\0'))
                {
                    if (av[i][j] >= 97 && av[i][j] <= 122)
                        av[i][j] -= 32;
                }
                write(1, &av[i][j], 1);
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}