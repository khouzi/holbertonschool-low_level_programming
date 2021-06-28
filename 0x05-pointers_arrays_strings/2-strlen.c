#include "holberton.h"

/**
 * int _strlen - Write a function that returns the length of a string.
 *
 * @s: pointer to a char
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
		i++;
	return (i);
}
