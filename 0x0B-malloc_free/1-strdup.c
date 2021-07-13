#include "holberton.h"
#include <stdio.h>

char *_strdup(char *str)
{
	char *T;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		*T = *str;
		T++;
		str++;
	}
	return (T);
}
