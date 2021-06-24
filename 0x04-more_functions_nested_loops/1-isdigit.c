#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	for (i = 0; i <= 9; i++)
		if (c == i)
			return (1);
		else
			return (0);
}
