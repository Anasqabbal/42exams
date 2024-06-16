#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = -1;
        int res;

        while(av[1][++i])
        {
            if (av[1][i] >= 65 && av[1][i] <= 90)
                res = av[1][i] - 65;
            else if  (av[1][i] >= 97 && av[1][i] <= 122)
                res = av[1][i] - 97;
            while(res > 0)
            {
                write(1, &av[1][i], 1);
                res--;
            }
            write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
}