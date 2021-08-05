#include "main.h"
/**
 * binary_to_uint - converts binary string to an unsigned integer
 * @b: pointer to binary string in memory to convert to integer
 *
 * Return: unsigned integer representing binary value
 */
unsigned int binary_to_uint(const char *b)
{
	int base = 1;
	unsigned int t = 0, r = 0;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	while (len > 0)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);
		t = (b[len - 1] == '1') ? 1 : 0;
		r += (t * base);
		base *= 2;
		len--;
	}
	return (r);
}
