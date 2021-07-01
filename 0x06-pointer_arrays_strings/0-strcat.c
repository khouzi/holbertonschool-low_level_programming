#include "holberton.h"


char *_strcat(char *dest, char *src)
{
	int i,j;
	char K[];

	i = 0;
	while (*dest != '\0')
	{
		K[i] = *dest;
		dest++;
		i++;
	}
	_putchar("");
	i++;
	while (*src)
	{
		K[i] = *src;
		i++;
		src++;
	}
	return (K);
}
