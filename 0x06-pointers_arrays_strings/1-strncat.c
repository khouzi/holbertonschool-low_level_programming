#include "holberton.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest)
	{
		dest++;
	}

	while (src < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
