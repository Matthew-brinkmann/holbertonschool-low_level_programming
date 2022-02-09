#include <stdio.h>

/**
 * main - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void main(void)
{
	long long a = 1;
	long long b = 2;
	/* count will increment each time a umber is added */
	long long count = 0;

	printf("%lld, %lld,  ", a, b);
	count = 2;
	while (count < 50)
		{
			a = a + b;
			count ++;
			printf("%lld", a);
			if (count < 50)
				printf(", ");
			b = a + b;
			count ++;
			printf("%lld", b);
			if (count < 50)
				printf(", ");
		}
	printf("\n");
}
