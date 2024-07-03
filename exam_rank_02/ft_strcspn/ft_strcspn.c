#include <stdio.h>
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{

	size_t i = 0;
	size_t k = 0;
	while(s[i])
	{
		while(reject[k])
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}
		k = 0;
		i++;
	}
	return(i);
}