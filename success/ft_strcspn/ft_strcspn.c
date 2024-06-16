#include <string.h>
#include <stdio.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (reject[k] != '\0')
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}
		k = 0;
		i++;
	}
	return (i);
}

// int main(int ac, char **av)
// {
//     // printf("%d\n", ft_strcspn(av[1], av[2]));
//     if (ac)
//         printf("%lu\n", strcspn(av[1], av[2]));
// }