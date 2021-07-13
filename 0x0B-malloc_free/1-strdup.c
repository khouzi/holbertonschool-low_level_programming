#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *T;
	int i,j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + j))
		j++;
	T = malloc(sizeof(*str) * j + 1);
	if (T == NULL)
		return (NULL);
	while (*str)
	{
		T[i] = str[i];
		i++;
	}
	return (T);
}
