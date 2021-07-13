#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings, makes new string
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1Size = 0, s2Size = 0;
	char *T, *TStart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1Size))
		s1Size++;
	while (*(s2 + s2Size))
		s2Size++;
	T = malloc(sizeof(char) * (s1Size + s2Size + 1));
	if (conc == NULL)
		return (NULL);
	TStart = T;
	while (*s1)
		*T++ = *s1++;
	while (*s2)
		*T++ = *s2++;
	*T = '\0';
	return (concStart);
}
