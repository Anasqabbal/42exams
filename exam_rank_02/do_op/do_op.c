#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int nb1 = atoi(av[1]);
		int nb2 = atoi(av[3]);

		if (av[2][0] == '+')
			printf("%d", nb1 + nb2);
		if (av[2][0] == '-')
			printf("%d", nb1 - nb2);
		if (av[2][0] == '*')
			printf("%d", nb1 * nb2);
		if (av[2][0] == '/')
			printf("%d", nb1 / nb2);
		if (av[2][0] == '%')
			printf("%d", nb1 % nb2);
	}
	printf("\n");
}