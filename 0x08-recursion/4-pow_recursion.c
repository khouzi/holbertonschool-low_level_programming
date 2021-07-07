#include "holberton.h"

/**
 * pow_recursion - function that returns the value of x raised
 *                  to the power of y.
 *
 * @x : integer.
 * @y : second integer.
 *
 * return : the value of @x raised to the power of @y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else 
		return (x * _pow_recursion(x, y--));
}
