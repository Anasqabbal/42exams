#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len  = -1;
		while(av[1][++len]);
		len--;
		while(len >= 0)
			write(1, &av[1][len--], 1);
	}
	write(1, "\n", 1);
}