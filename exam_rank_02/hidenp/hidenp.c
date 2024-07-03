#include <unistd.h>

void ft_hidenp(char *s, char *s1)
{
	int i = 0;
	int j = 0;

	while(s[i])
	{
		while(s[i] != s1[j] && s1[j])
			j++;
		if (s1[j] == '\0')
		{
			write(1, "0", 1);
			return ;
		}
		i++;
		j++;
	}
	write(1, "1", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{	
		ft_hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
}