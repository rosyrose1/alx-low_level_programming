#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by, a new line
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list roll;

	unsigned int x;

	va_start(roll, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(roll, int));

		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param_list);
}

