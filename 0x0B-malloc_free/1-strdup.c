#include "holberton.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *T;

	T = malloc(sizeof(*str));
	if (T == NULL)
		return (NULL);
	while (*str)
	{
		*T = *str;
		T++;
		str++;
	}
	return (T);
}
