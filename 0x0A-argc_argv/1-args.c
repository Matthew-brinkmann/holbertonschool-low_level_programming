#include <stdio.h>
#include "main.h"

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
	*argv = argv[argc];
	printf("%d\n", argc - 1);
	return (0);
}
