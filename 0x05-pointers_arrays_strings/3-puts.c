#include "holberton.h"

/**
 * _puts - Write a function that prints a string,
 *         followed by a new line, to stdout.followed by a new line,
 *         to stdout.
 * @str: pointer to a character.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str++)
	{
		_putchar(str[i]);
		i++;
	}
	
}
