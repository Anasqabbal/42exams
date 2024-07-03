#include <unistd.h>
#include <stdio.h>

char *ftstrrchr(char *s, int len)
{
	while(s[len] == ' ' || s[len] == '\t')
		len--;
	while(len >= 0)
	{
		if (s[len] == ' ' || s[len] == '\t')
			return (s + len);
		len--;
	}
	return (NULL);
}

int	ft_strlen(char *s)
{
	int i = -1;
	while(s[++i]);
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int i = 0;
		char *res;

		res = ftstrrchr(s, ft_strlen(s) - 1) + 1;
		while(res[i] && res[i] != ' ' && res[i] != '\t')
		{
			write(1, &res[i++], 1);
		}
	}
	write(1, "\n", 1);
}