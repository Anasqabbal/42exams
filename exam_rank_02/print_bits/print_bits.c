#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int i = 7;
	int arr[8];

	while(octet)
	{
		arr[i--] = (octet % 2);
		octet /= 2;
	}
	while(i >= 0)
		arr[i--] = 0;
	i = 0;
	while(i < 8)
		ft_putchar(arr[i++] + 48);
}

// int main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		print_bits(atoi(av[1]));
// 	}
// }