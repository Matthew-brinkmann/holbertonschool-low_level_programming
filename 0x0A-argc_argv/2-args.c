#include <stdio.h>
#include "main.h"

/**
 * main - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
