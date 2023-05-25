#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add all the numbers of parameters
 * @n: the number of parameters passed
 * @...: number which will be added
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int r, sum;

	sum = 0;

	va_start(count, n);

	for (r = 0; r < n; r++)
		sum += va_arg(count, int);
	va_end(count);
	return (sum);
}
