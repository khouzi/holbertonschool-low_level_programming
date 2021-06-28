#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	while (*s++)
		s++;
	while (*s--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
