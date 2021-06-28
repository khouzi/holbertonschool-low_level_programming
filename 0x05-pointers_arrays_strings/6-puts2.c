#include "holberton.h"

/**
 * _puts - Write a function that prints a string,
 *         followed by a new line, to stdout.followed by a new line,
 *         to stdout.
 * @str: pointer to a character.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		str = str + 2;
	}
	_putchar('\n');
}
