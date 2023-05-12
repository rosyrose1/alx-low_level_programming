#include <stdio.h>

/**
 * main - Writing a program that prints all arguments it receives
 * @argc: arguments count
 * @argv: argument passed into the main as arrays of string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
