#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int i = -1;
		while(s[++i])
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] += 32;
			else if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
			write(1, &s[i], 1);
		}
	}
	write(1, "\n", 1);
}