#include <stdio.h>
#include <stdlib.h>

/**
 * main - Writing a program that multiplies two numbers.
 * @argc: arguments count
 * @argv: argument passed into the main as arrays of string
 * Return: 0 as Success, 1 as failure
 */
int main(int argc, char *argv[])
{
	int m;
	int n;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	result = m * n;

	printf("%d\n", result);
	return (0);
}
