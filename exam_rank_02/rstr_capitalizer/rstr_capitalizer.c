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
	if (ac != 1)
	{
		int i = 1;
		int j;
		char *s;
		while(i < ac)
		{
			to_lower(av[i]);
			j = -1;
			s = av[i];
			while(s[++j])
			{
				if ((s[j] >= 97 && s[j] <= 122) && (s[j + 1] == '\t' || s[j + 1] == ' ' || !s[j + 1]))
					s[j] -= 32;
				write(1, &s[j], 1);
			}
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
