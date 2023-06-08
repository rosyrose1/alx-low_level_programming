#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The number to scan.
 * @index: The bit to return.
 *
 * Return: Bit (0 | 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

