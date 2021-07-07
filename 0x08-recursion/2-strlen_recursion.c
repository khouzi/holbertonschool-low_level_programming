#include "holberton.h"

/**
 * _strlen_recursion - write a function that returns the lenghts 
 *                     of a string.
 *
 * @s : pointer to a character.
 *
 * return: the length of the string @s.
 */


int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	return (i);
}
