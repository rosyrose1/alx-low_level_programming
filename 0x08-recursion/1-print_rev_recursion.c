#include "main.h"

/**
 * _print_rev_recursion - Entry
 * Description: function that prints a string in reverse.
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
