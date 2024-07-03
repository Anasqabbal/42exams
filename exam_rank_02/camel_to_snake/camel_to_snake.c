#include <stdlib.h>
#include <unistd.h>


int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = -1;
		char *s = av[1];
		while(s[++i])
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				if (i)
					write(1, "_", 1);
				s[i] += 32;
			}
			write(1, &s[i], 1);
		}
	}
	write(1, "\n", 1);
}