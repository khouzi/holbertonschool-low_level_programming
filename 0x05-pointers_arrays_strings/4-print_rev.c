#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void print_rev(char *s)
{
	*s  = *(s + _strlen(*s));
	while (*s)
		_putchar(*str--);
	_putchar('\n');
