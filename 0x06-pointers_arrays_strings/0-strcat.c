#include "holberton.h"

char *_strcat(char *dest, char *src)
{

        while (*dest)
        {
                dest++;
        }
        *dest = _putchar("");
        while (*src)
        {
                *dest = *src;
                src++;
		dest++;
        }

        return (dest);
}
