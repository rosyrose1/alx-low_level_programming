#include "main.h"

/**
 * reverse_array - reversing the content of an array of integers
 * @a: an integer type
 * @n: an integer type
 */
void reverse_array(int *a, int n)
{
	int b;
	int *begin, *end;
	int tmp;
	int c;
	int d;

	begin = a;
	end = a;
	for (b = 0; b < n - 1; b++)
		end++;

	c = 0;
	d = n - 1;
	while (c < d)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		begin++;
		end--;

		c++;
		d--;
	}
}
