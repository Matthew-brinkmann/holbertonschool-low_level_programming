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
	double a = 1;
	double b = 2;
	/* count will increment each time a umber is added */
	double count = 0;

	printf("%.0lf, %.0lf,  ", a, b);
	count = 2;
	while (count < 50)
		{
			a = a + b;
			count ++;
			printf("%.0lf", a);
			if (count < 50)
				printf(", ");
			b = a + b;
			count ++;
			printf("%.0lf", b);
			if (count < 50)
				printf(", ");
		}
	printf("\n");
}
