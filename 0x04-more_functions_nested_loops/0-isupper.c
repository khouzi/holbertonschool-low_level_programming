#include "holberton.h"

int _isupper(int c)
{
	char T[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		if (c == T[i])
			return (1);
	}
	else
		return (0);
}
