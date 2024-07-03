#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int it_is_prime(int nb)
{
	int i = 1;

	while(++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int mini_atoi(char *s)
{
	int i = -1;
	int res = 0;
	int sign = 1;

	while(s[++i] == ' ' || (s[i] >= 9 && s[i] <= 13));
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while((s[i] >= 48 && s[i] <= '9'))
		res = res * 10 + (s[i++] - 48);
	return (res * sign);
}

int main(int ac, char **av)
{
	if (ac != 2 || mini_atoi(av[1]) < 0)
		write(1, "0\n", 2);
	else
	{
	int res;

		res = mini_atoi(av[1]);
		int i = 2;
		int res2 = 0;

		while(i <= res)
		{
			if (it_is_prime(i))
				res2 = res2 + i;
			i++;
		}
		ft_putnbr(res2);
		write(1, "\n", 1);
	}
}