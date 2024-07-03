#include <unistd.h>
#include <stdio.h>


int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int tmp;

	while(i < len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return (tmp);
}

// int main()
// {
// 	int a[6] = {1, 23453, 4, 452, 2, 797};
// 	// int a[6] = {1, 2, 4, 45, 2, 797};
// 	// int a[6] = {1, 2, 4, 45, 2, 797};
// 	int res = max(a, 6);
// 	printf("your res == %d\n",res);
// }