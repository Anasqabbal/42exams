#include <stdlib.h>
// #include <stdio.h>

int     *ft_range(int start, int end)
{
	int lim;
	int *arr;
	int i;

	i = 0;
	if (start > end)
	{
		lim = start - end;
		arr = malloc(sizeof(int) * (lim + 2));
		if (!arr)
			return (NULL);
		while(start >= end)
		{
			arr[i] = start--;
			i++;
		}
	}
	else
	{
		lim = end - start;
		arr = malloc(sizeof(int) * (lim + 2));
		if (!arr)
			return (NULL);
		while(start <= end)
		{
			arr[i] = start++;
			i++;
		}
	}
	return (arr);
}

// int main(int ac, char **av)
// {
// 	if(ac)
// 	{
// 		int from = atoi(av[1]);
// 		int to = atoi(av[2]);
// 		int *arr = ft_range(from, to);
// 		int lim ;

// 		if (from > to)
// 			lim = from - to;
// 		else
// 			lim = to - from ;
// 		int i = -1;
// 		while(++i <= lim)
// 			printf("%d,", arr[i]);
// 		free(arr);
// 	}
// }