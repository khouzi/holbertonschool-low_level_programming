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
void *memset(char *s, int b, unsigned int n)
{
	int i;
	char *ch = s;

	for (i=0; i < n; i++)
		ch[i] = b;
	return (ch);
}
