#include "main.h"

/**
 * check_match - Entry point
 * Description: Checking for the  match
 * @s1: Char
 * @s2: Char
 * Return: 1 or 0
 */

int check_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (check_match(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (check_match(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && check_match(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - Entry point
 * Description: Comparing 2 strings
 * @s1: Char
 * @s2: Char
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2));
}
