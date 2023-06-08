#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that convert a binary number to an unsigned int
 * @b: string to convert.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, p;

	if (!b || !*b)
		return (0);

	num = p = 0;
	while (b[p])
	{
		if (b[p] > 49)
			return (0);
		else if (b[p] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		p++;
	}
	return (num);
}

