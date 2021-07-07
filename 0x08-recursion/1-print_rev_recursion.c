#include "holberton.h"

/**
 * _print_rev_recursion - write a function that prints
 *                        a strings in reverse.
 * 
 * @s : pointer to a character.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
		_putchar ('\n');
	else if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
}
