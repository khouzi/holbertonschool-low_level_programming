#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings, makes new string
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 *
 * Return: pointer to new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *T, *Tstart;;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n > j)
		n = j;
	T = malloc(sizeof(char) * (i + j + 1));
	if (T == NULL)
		return (NULL);
	Tstart = T;
	while (*s1)
		*T++ = *s1++;
	while (i < n)
	{
		*T++ = *s2++;;
		i++;
	}
	*T = '\0';

	return (Tstart);
}
