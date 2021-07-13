#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *T, *K;
	char *dupStart;
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	K = str;
	while (*(str + i))
		j++;
	T = malloc(sizeof(*str) * (i + 1));
	if (T == NULL)
		return (NULL);
	dupStart = T;
	while (*K)
		*T++ = *K++;
	*T = '\0'; /* null byte */
	return (dupStart);
}
