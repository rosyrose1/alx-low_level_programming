#include "main.h"

/**
 * leet - take strings and capitalize the words
 * @a: the string to capitalize
 * Return: capitalized words
 */

char *leet(char *a)
{
	int c, d;
	char check[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (c = 0; *(a + c) != '\0'; c++)
	{
		for (d = 0; check[d]; d++)
			if (check[d] == *(a + c))
			{
				*(a + c) = change[d];
				break;
			}
	}
	return (a);
}
