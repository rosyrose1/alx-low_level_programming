#include "main.h"

/**
 * cap_string - capitalizing all the words of a string
 * @a: the string to capitalize
 * Return: capitalized first letters
 */

char *cap_string(char *a)
{
	int c, d;
	char *seperators = ",;.!?\"(){} \n\t";

	for (c = 0; *(a + c) != '\0'; c++)
	{
		if (*(a + c) >= 'a' && *(a + c) <= 'z')
			for (d = 0; *(seperators + d) != '\0'; d++)
			{
				if (*(a + c - 1) == *(seperators + d))
				{
					*(a + c) -= 32;
					break;
				}
				else if (c == 0)
				{
					*(a + c) -= 32;
					break;
				}
			}
	}
	return (a);
}
