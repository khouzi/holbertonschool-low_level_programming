#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j;
	int n;

	n = 0;
	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			n = i * 9;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
}
