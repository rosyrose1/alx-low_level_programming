#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: integer to swap
 * @y: integer to swap
 */

void swap_int(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
