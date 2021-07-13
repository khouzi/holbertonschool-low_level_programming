#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array in memory and initializes it
 *
 * @size: unsigned int, size of array to be created
 * @c: char to fill array with upon initialization
 *
 * Return: pointer to beginning of array
 */

char *create_array(unsigned int size, char c)
{
	char *T;
	unsigned int i;

	if (size == 0)
		return (NULL);
	T = malloc(sizeof(char) * size);
	if (T == NULL)
	{
		return (NULL);
        }
	while (i < size)
	{
		*(T + i) = c;
		i++;
	}
	return (T);
}
