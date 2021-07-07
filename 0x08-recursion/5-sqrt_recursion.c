#include "holberton.h"

/**
 * _sqrt_recursion - a function that returns the natural square 
 *                   root of a number.
 *
 * @n; int.
 *
 * Return: The root of n .
 */

int _sqrt_recursion(int n)
{
	if ((n * n) %  n != 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return ((n * n) /  n);
}
