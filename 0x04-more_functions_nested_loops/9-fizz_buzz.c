#include <stdio.h>
/**
 * main - print numbers 1 - 100, replacing numbers with either certain words
 *
 * Description: if numer is multiple of 3 print Fizz, multiple of 5
 * print Buzz, or multiple of both, print FizzBuzz
 *
 * Return: nothing
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (!(x % 3 == 0) && !(x % 5 == 0))
		{
			printf("%d ", x);
			x++;
		} else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
			x++;
		} else if (x % 3 == 0)
		{
			printf("Fizz ");
			x++;
		} else if (x % 5 == 0)
		{
			if (x != 100)
				printf("Buzz ");
			else
				printf("Buzz");
			x++;
		}
	}
	putchar('\n');
	return (0);
}
