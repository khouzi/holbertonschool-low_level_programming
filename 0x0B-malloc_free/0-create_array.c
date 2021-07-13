#include "holberton.h"
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char *T;

	if (size == NULL)
		return (0);
	T = malloc(size);
	T[0] = c;
	return (T);
}
