#include "holberton.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{

	while (*dest)
	{
		dest++;
	}

	for (src; *src != 0; i++)
	{
		*dest = *src;
		dest;
	}

	*dest = '\0';
	return (dest);
}
