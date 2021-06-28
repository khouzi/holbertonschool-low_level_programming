#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int L = 0;
	char T
	while (*s++)
		L++;
	for (*s = L - 1; *s >= L / 2; *s --)
	{
		T = *s;
		*s = *s --;
		*s = T;
	}
}
	_putchar('\n');
}
