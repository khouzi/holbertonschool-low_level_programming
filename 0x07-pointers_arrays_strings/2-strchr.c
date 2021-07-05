#include "holberton.h"

/**
 * _strchr - write a function that locates a character in a string
 *
 * @s: A pointer to the memory area to be filled.
 * @c: first occurrence of the character.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*s++)
		i++;
	for (s[j]; j <= i; j++)
	{
		if (s[j] == c)
			s = &c;
	}
	return (s);
}




