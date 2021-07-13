#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *T, *K;
	int i,j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	k = str;
	while (*(str + j))
		j++;
	T = malloc(sizeof(*str) * j + 1);
	if (T == NULL)
		return (NULL);
	while (*K)
	{
		T[i] = K[i];
		i++;
	}
	return (T);
}
