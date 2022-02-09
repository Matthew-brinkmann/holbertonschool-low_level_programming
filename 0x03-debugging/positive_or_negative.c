#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - randomly selects a number and decides if it is negative of positive
 *
 * Description: Random number and positive or negative assigner
 *
 * Return: will return 0
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
