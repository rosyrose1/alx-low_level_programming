#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print the stings, followed by a new line
 * @separator: string to be printed between strings
 * @n: the number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list roll;
	unsigned int r;
	char *string;

	va_start(roll, n);

	for (r = 0; r < n; r++)
	{
		string = va_arg(roll, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (r != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(roll);
}
