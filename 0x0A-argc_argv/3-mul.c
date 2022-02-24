#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - short description
 * @argc: the number of arguments passed into function
 * @argv: the array containing the arguments
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(int argc, char *argv[])
{
	int answer, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	answer = num1 * num2;
	printf("%d\n", answer);

	return (0);
}
