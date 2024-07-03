#include <unistd.h>
void ft_putchar (char c)
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
	if (nb < 10)
	{
		ft_putchar (nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main()
{
	int i = 0;
	while(++i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3  == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		ft_putchar('\n');
	}
}