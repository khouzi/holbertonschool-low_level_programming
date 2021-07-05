#include "holberton.h"

/**
* memset - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
void *memset(void *s, int b, unsigned int n)
{
	for (s; *s <= n; s++)
		*s = b;
	return (s);
}
