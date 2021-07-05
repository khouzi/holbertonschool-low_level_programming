#include "holberton.h"
/**
 * _memcpy - writes a function that copies memory area
 *
 * @dest: A pointer to the memory area to be filled.
 * @src: A pointer to the memory area to be filled.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (dest; *dest <= n; dest++)
	{
		*dest = *src;
		*src++;
	}
	return (dest);
}
