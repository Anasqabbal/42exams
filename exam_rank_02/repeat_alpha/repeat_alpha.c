#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int i = -1;
		int res = 0;
		while(s[++i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				res = s[i] - 'a';
			else if (s[i] >= 'A' && s[i] <= 'Z')
				res = s[i] - 'A';
			while(res-- >= 0)
				write(1, &s[i], 1);
			res = 0;
		}
	}
	write(1, "\n", 1);
}
