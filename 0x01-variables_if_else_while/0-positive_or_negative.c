#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 0 )
{
	printf("%d is positive",n);
}
else if ( a == 0 )
{
	printf("%d is zero",n);
}
else if ( a < 0 )
{
	printf("%d is negative",n);
}
return (0);
}
