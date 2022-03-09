#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - will add togeth to integers
 * @a: first int inputted
 * @b: second int inputted
 * Description: long description
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calcs difference of a and b
 * @a: first int inputted
 * @b: second int inputted
 * Description: long description
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies ints
 * @a: first int inputted
 * @b: second int inputted
 * Description: long description
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calcs division of ints
 * @a: first int inputted
 * @b: second int inputted
 * Description: long description
 *
 * Return: result of a divide b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod of a and b
 * @a: first int inputted
 * @b: second int inputted
 * Description: long description
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
