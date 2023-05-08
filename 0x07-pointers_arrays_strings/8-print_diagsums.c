#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @s: an array
 * @size: size of an  array
 * Return: Always 0 (Success)
 */

void print_diagsums(int *s, int size)
{
	int i;
	int k;
	int sum_diag1;
	int sum_diag2;

	sum_diag1 = 0;
	sum_diag2 = 0;

	/* The first Diagonal from left */
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
			{
				sum_diag1 = sum_diag1 + *(s + (i * size) + k);
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (k = (size - 1); k >= 0; k--)
		{
			if (k == (size - 1 - i))
			{
				sum_diag2 = sum_diag2 + *(s + (i * size) + k);
			}
		}
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
