#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - will add togeth to integers
 * @s: first int inputted
 * Description: long description
 *
 * Return: sum of a and b
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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
