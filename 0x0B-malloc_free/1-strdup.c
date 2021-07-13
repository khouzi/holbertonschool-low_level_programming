#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *T;
	int i;

	int = 0;
	T = malloc(sizeof(*str));
	if (T == NULL)
		return (NULL);
	while (*str)
	{
		T[i] = str[i];
		i++;
	}
	return (T);
}
