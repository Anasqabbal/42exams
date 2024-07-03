#include <unistd.h>

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
		char *s1 = av[2];
		int i = -1;
		int j = -1;
		while(s[++i])
		{
			if (it_is_before(s, s[i], i))
				write(1, &s[i], 1);
		}
		while(s1[++j])
		{
			if (it_is_before(s, s1[j], i) && it_is_before(s1, s1[j], j))
				write(1, &s1[j], 1);
		}
	}
}