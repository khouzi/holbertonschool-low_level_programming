#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0 ; i < 9 ; i++)
{
	for (j = 1 ; j <= 9; j++)
{
	if (i < j)
{
	printf("%d%d", i, j);
	if (i != 8 || j != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
printf("\n");
return (0);
}
