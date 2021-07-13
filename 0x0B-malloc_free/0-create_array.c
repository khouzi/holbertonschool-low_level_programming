#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *T;

	if (size == 0)
		return (NULL);
	T = malloc(size);
	if (s == NULL)
	{
		printf("Can't allocate %d bytes (after 0 calls)\n", size);
		return (1);
        }
	T[0] = c;
	return (T);
}
