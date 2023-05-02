#include "main.h"

/**
 * _strlen - returns the length of a string
 * @t: string
 * Return: length
 */

int _strlen(char *t)
{
	int len = 0;

	while (*t != '\0')
	{
		len++;
		t++;
	}

	return (len);
}

/**
 * rev_string - reverses a string
 * @t: string to reverse
 */

void rev_string(char *t)
{
	int a = 0;
	int b = (_strlen(t) - 1);
	char tmp;

	while (a < b)
	{
		tmp = t[a];
		t[a] = t[b];
		t[b] = tmp;
		a++, b--;
	}
}
