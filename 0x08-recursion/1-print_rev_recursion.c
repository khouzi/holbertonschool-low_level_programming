#include "holberton.h"

/**
 * _print_rev_recursion - write a function that prints
 *                        a strings in reverse.
 *
 * @s : pointer to a character.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
