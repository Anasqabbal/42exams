#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_cl(int n)
{
	unsigned int n1;
	int i = 0;

	n1 = n;
	if (n < 0)
	{
		n1 = n * -1;
		i++;
	}
	while(n1)
	{
		i++;
		n1 /= 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len = ft_cl(nbr);
	unsigned int n;
	char *res;

	if (len == 0)
	{
		res = malloc(sizeof(char) * 2);
		if (!res)
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
	}
	else
	{
		res = malloc(sizeof(char) *  (len + 1));
		if (!res)
			return (NULL);
		res[len--] = '\0';
		n = nbr;
		if (nbr < 0)
		{
			res[0] = '-';
			n = nbr * -1;
		}
		while(n)
		{
			res[len--] = (n % 10) + 48;
			n /= 10;
		}
	}
	return (res);
}

// int main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		char *res = ft_itoa(atoi(av[1]));
// 		printf("your res == %s\n", res);
// 	}
// }
