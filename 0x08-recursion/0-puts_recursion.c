#include "holberton.h"

/**
 * _puts_recursion - write a function that prints a string followed by a new line
 *
 * @s : piinter to a string.
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_puthcar(*s);
		s++;
	}
}
