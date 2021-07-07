#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */


int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	i = i + 1;
	if (*s)
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	return (i);
}
