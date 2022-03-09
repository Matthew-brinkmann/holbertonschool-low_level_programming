#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - get info and pass it on
 * @argc: the number of arguments passed into function
 * @argv: the array of the arguments
 * Description: long description
 *
 * Return: sum of a and b
 */
int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
