#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checksendianness.
 *
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *)&r;

	if (*c)
		return (1);

	return (0);
}

