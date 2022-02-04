#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(void)
{
	int n, lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = abs(n % 10);
	if (lastn == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lastn > 5)
		printf("Last digit of %d is %d and and is greater than 5\n", n, lastn);
	else if (lastn < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	return (0);
}
