#include "holberton.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *T, *K, *D, *L;

	i = 0;
	j = 0;
	K = s1;
	while (*s1)
		i++;
	L = s2;
	while (*s2)
		j++;
	T = malloc ((sizeof(*s1) * (i + 1)) + (sizeof(*s2) * (j + 1)));
	if (T == NULL)
		return (NULL);
	D = T;
	while (*K)
		*T++ = *K++;
	while (*L);
		*T++ = *L;
	*T = '\0';
	return (D);
}
