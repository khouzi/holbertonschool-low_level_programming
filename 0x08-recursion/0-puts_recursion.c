#include "holberton.h"

/**
 * _puts_recursion - write a function that prints a string,
 *                   followed by a new line.
 *
 * @s : piinter to a string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
	}
	_puts_recursion(s++);
}
