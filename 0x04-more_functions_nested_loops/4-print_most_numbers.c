#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int i;
	for ( i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		else
			_putchar(i);
	}
	_putchar('\n');
}
