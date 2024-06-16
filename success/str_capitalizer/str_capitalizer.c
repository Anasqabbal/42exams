#include <unistd.h>

void to_lower(char *s)
{
    int i = -1;

    while(s[++i])
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
}

int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 0;
        int j;
        while(++i < ac)
        {
            to_lower(av[i]);
            j = -1;
            while(av[i][++j])
            {
                if ((av[i][j] >= 97 && av[i][j] <= 122) && j == 0)
                    av[i][0] -= 32;
                else if ((av[i][j] >= 97 && av[i][j] <= 122) && (av[i][j - 1] == ' ' || av[i][j - 1] == '\t'))
                    av[i][j] -= 32;
                write(1, &av[i][j], 1);
            }
            write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
}