#include "main.h"
/**
 *_memcpy - a function that copies the memory area
 *@dest: where memory is stored
 *@src: where the memory is stored
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
