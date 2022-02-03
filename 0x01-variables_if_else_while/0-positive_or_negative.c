#include <stdlib.h>
#include <time.h>
/**
 * main - randomly selects a number and decides if it is negative of positive
 * @n: The number to be checked
 * Description: Random number and positive or negative assigner
 *
 * Return: will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
		printf("is zero");
	else if (n>0)
		printf("is positive");
	else
		printf("is negative");
	return (0);
}
