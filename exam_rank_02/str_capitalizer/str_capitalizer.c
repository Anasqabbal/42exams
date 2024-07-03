#include <unistd.h>
#include <stdio.h>

void ft_to_lower(char *s)
{
	int i = -1;
	while (s[++i])
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
	}
}

int main(int ac, char **av)
{
	if (ac != 1)
	{
		int i = 0;
		int j;
		while(av[++i] && i < ac)
		{
			ft_to_lower(av[i]);
			j = 0;
			while(av[i][j])
			{
				if (j == 0 && av[i][j] >= 97 && av[i][j] <= 122)
					av[i][j] -= 32;
				else if ((av[i][j] == '\t' || av[i][j] == ' ') && (av[i][j + 1] >= 97 && av[i][j + 1] <= 122))
					av[i][j + 1] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}