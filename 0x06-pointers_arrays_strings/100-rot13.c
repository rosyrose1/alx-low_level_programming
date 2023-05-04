#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to a string
 * Return: a string
 */
char *rot13(char *str)
{
	int i;
	int k;
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			if (str[i] == s1[k])
			{
				str[i] = s2[k];
				break;
			}
		}
	}
	return (str);
}
