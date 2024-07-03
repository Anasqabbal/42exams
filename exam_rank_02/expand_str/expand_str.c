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

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = -1;
		char *s = av[1];
		while(s[++i] == '\t' || s[i] == ' ');
		while(s[i])
		{
			while(s[i] != ' ' && s[i] != '\t' && s[i])
				ft_putchar(s[i++]);
			while((s[i] == '\t' || s[i] == ' ') && s[i])
			{
				if (s[i + 1] != '\t' && s[i + 1] != ' ' && s[i + 1])
					ft_putstr("   ");
				i++;
			}
		}
	}
	ft_putchar('\n');
}