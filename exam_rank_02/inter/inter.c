#include <unistd.h>

int ft_strlen(char *s)
{
	int i = -1;
	while(s[++i]);
	return (i);
}

int it_is_before(char *s, char c, int len)
{
	int i = -1;
	while(++i < len)
	{
		if (s[i] == c)
			return (0);
	}
	return (1);
}


int main(int ac, char **av)
{
	if (ac == 3)
	{
		char *s = av[1];
		int i = -1;
		int len = ft_strlen(av[2]);
		while(s[++i])
		{
			if (it_is_before(s, s[i], i) && !it_is_before(av[2], s[i], len))
				write(1, &s[i], 1);
		}
	}
    write(1, "\n", 1);
}