#include <stdlib.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
	unsigned int n;
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
    return (n);
}

// int main(int ac, char **av)
// {
//     (void)ac;

//     printf("%d\n", lcm(atoi(av[1]), atoi(av[2])));
// }