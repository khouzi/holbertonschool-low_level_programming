#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
char hex[16] = "0123456789abcdef";
for (j = 0 ; j < 16 ; j++)
{
	putchar(hex[j]);
}
putchar('\n');
return (0);
}
