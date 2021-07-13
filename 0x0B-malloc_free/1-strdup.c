#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in memory
 *
 * @str: string to duplicate
 *
 * Return: pointer to beginning of duplicated string
 */

char *_strdup(char *str)
{
	char *T, *K;
	char *D;
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	K = str;
	while (*(str + i))
		i++;
	T = malloc(sizeof(*str) * (i + 1));
	if (T == NULL)
		return (NULL);
	D = T;
	while (*K)
		*T++ = *K++;
	*T = '\0';
	return (T);
}
