#include "3-calc.h"

/**
 * get_op_func - Get operator function
 * @s: The operator
 *
 * Return: The function associated to the operator @s
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op && *(ops[i].op) != *s; i++)
		;

	return (ops[i].f);
}
