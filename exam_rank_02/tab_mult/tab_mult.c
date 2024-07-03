#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *s)
{
	int i = -1;
	while(s[++i])
		ft_putchar(s[i]);
}

void ft_putnbr(int nb)
{
	if(nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	mini_atoi(char *s)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+')
		i++;
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nb = mini_atoi(av[1]);
		int i = 0;

		while(++i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(nb);
			ft_putstr(" = ");
			ft_putnbr(i * nb);
			ft_putchar('\n');
		}
	}
	else
		write (1, "\n", 1);
}