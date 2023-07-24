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
