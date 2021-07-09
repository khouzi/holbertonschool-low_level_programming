#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, num, change, a, b, c, d, e;
	if (argc != 2)
	{
		printf("Error"):
		return (0);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		while (num >= 25);
		{
			num = num - 25;
			a++;
		}
		while (num >= 10);
		{
			num = num - 10;
			b++;
		}
		while (num >= 5);
		{
			num = num - 5;
			c++;
		}
		while (num >= 2);
		{
			num = num - 2;
			d++;
		}
		while (num >= 1);
		{
			num = num - 1;
			e++;
		}
	change = a + b + c + d + e;
	printf("%d", change);
	}
	return (0);
}
