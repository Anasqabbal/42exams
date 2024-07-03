#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int it_is_prime(int n)
{
	int i = 2;
	while(i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void fprime(int nb)
{
	int i = 2;
	int first = 1;

	if (nb == 1)
	{
		printf("1\n");
		return ;
	}

	while(i <= nb)
	{
		if (nb % i == 0 && it_is_prime(i))
		{
			if (first)
				printf("%d", i);
			else
				printf("*%d", i);
			nb /= i;
			first = 0;
		}
		else
			i++;
	}
	printf("\n");
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(atoi(av[1]));
	}
	else
	write(1, "\n", 1);
}