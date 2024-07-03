#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *arr;
	int lim;

	if (end > start)
	{
		lim = end - start;
		int i = 0;
		arr = malloc(sizeof(int) * (lim + 1));
		if (!arr)
			return (0);
		while(end >= start)
		{
			arr[i] = end--;
			i++;
		}
	}
	else
	{
		lim = start - end;
		int i = 0;
		arr = malloc(sizeof(int) * (lim + 1));
		if (!arr)
			return (0);
		while(end <= start)
		{
			arr[i] = end++;
			i++;
		}
	}
	return (arr);
}

// int main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		int nb = atoi(av[1]);
// 		int nb1 = atoi(av[2]);

// 		int *arr = ft_rrange(nb, nb1);
// 		int i = -1;
// 		while(arr[++i])
// 			printf("%d,", arr[i]);
// 	}
// }