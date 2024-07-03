#include <stdlib.h>
#include <unistd.h>

void to_lower(char *s)
{
	int i = -1;
	while(s[++i])
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = -1;
		char *s = av[1];
		to_lower(s);
		while(s[++i])
		{
			if (s[i] == '_' && s[i + 1])
				s[i + 1] -= 32;
			if (s[i] != '_')
				write(1, &s[i], 1);
		}
	}
	write(1, "\n", 1);
}
