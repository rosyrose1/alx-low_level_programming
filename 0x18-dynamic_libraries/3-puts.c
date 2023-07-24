#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @t: string to print
 */

void _puts(char *t)
{
	while (*t != '\0')
		_putchar(*t++);

	_putchar('\n');
}
