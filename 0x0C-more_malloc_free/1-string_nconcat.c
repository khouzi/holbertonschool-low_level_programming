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
	hcar *T, *Tstart;;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	T = malloc(sizeof(char) * (i + n + 1));
	if (T == NULL)
		return (NULL);
	Tstart = T;
	while (j < n && s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i + n + 1] = '\0';

	return (s1);
}
