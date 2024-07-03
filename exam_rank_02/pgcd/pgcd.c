#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_pgcd(int nb1, int nb2)
{
	int i;

	if (nb1 > nb2)
		i = nb1;
	else
		i = nb2;
	while(i)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}


int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_pgcd(atoi(av[1]), atoi(av[2])));
	}
	else
		write(1, "\n", 1);
}