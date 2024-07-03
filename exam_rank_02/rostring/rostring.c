#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *first_word(char *s, char **first)
{
	int i = -1;
	char *res;
	while(s[i++] && s[i] != ' ' && s[i] != '\t');
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	i = -1;
	while(s[++i] && s[i] != ' ' && s[i] != '\t')
		res[i] = s[i];
	*first = res;
	return (s + i);
}


int main(int ac, char **av)
{
	if (ac != 1)
	{
		char *s = av[1];
		char *first;
		int i = -1;
		while(s[++i] == ' ' || s[i] == '\t');
		s = first_word(s + i, &first);
		i = 0;
		while(s[i])
		{
			while(s[i] == ' ' || s[i] == '\t')
				i++;
			if (!s[i])
				break;
			while(s[i] && s[i] != ' ' && s[i] != '\t')
				write(1, &s[i++], 1);
			if (!s[i]  || (s[i] == ' ' || s[i] == '\t'))
				write(1, " ", 1);
		}
		i = -1;
		while(first[++i])
			write(1, &first[i], 1);
		free(first);
	}
	write(1, "\n", 1);
}