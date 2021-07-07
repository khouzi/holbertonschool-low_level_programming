#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n : int.
 *
 * Return: The factorial of @n.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		retturn (n * factorial(n - 1));
}
