#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *T;

	if (size == 0)
		return (NULL);
	T = malloc(size);
	T[0] = c;
	return (T);
}
