#include <stdio.h>
#include <stdlib.h>


int	    is_power_of_2(unsigned int n)
{
	if (!n)
		return (0);
	while(n > 1)
	{
		if (n % 2 == 1)
			return (0);
		n /= 2;
	}
	return (1);
}

// int main(int ac, char **av)
// {
// 	(void)ac;
// 	int nb = atoi(av[1]);
// 	printf("res == %d\n", is_power_of_2(nb));

// }