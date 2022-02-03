#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - randomly selects a number and decides if it is negative of positive
 *
 * Description: Random number and positive or negative assigner
 *
 * Return: will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
