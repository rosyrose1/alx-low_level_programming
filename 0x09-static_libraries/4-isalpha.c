#include "main.h"
/**
 * _isalpha - Checks for uppercase and lowercase
 * @c: Character that is being checked
 * Return: If c is lowercase or uppercase, return 1, if not return 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
