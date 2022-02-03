#include <stdio.h>

/**
 * main - Prints a string to the standart error output
 *
 * Description: using fprintf to achieve this as can't use printf or puts
 *
 * Return: will return 1
 */
int main(void)
{

	fprintf(stderr, "and that piece of art is useful\" -
Dora Korpar, 2015-10-19\n");
	return (1);
}
