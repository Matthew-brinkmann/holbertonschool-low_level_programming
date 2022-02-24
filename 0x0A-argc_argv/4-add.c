#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - will determain if the input is uppercase or lower case
 * @c: inputted character to determain case
 *
 * Description: long description
 *
 * Return: will return 1 if upper case or 0 if otherwise
 */
int _isdigit(int c)
{
	int x;

	if (c >= 48 && c <= 57)
		x = 1;
	else
		x = 0;
	return (x);
}

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
	int answer = 0, num1, counter = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (counter < argc)
	{
		if (_isdigit(*argv[counter]) == 1)
		{
			num1 = atoi(argv[counter]);
			answer = answer + num1;
			counter++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", answer);
	return (0);
}
