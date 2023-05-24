#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - choose the correct function based on the input
 * @s: the sign passed by the argument
 *
 * Return: Pointer to the crossponding sign function
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int m;

	m = 0;
	while (ops[m].op != NULL && *(ops[m].op) != *s)
	{
		m++;
	}
	return (ops[m].f);
}
