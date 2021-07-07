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
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	return (s);
}
