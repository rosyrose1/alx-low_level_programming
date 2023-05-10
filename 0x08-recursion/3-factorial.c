#include "main.h"

/**
 * factorial - Entry point
 * Description: function that returns the factorial of a given number
 * @n: number  of  factorial
 * Return: Always (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
