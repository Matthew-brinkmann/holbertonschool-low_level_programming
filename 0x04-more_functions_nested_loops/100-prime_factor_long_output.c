#include <stdio.h>
long highest = 0;
long lastTested = 2;

/**
 * find_prime - will find if the number entered is a prime number or not
 * @n: the inputted number
 *
 * Description: This is a bit inefficient however it works, this function
 * just checks the number against every number of half its value
 * to see if the modulos (modolus)? is 0? each prime number is written
 * to the global variable highest, if it is bigger than the variable
 * already stored
 *
 * Return: will not return anything.
 */
void find_prime(long n)
{
        long i ,m = 0, flag = 0;

	m = n / 2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			printf("%li is not prime\n", n);
			flag = 1;
			lastTested = n;
			break;
		}
	}
	if (flag == 0)
	{
		printf("%li is prime\n", n);
		if (n > highest)
			lastTested = n;
			highest = n;
	}
}

/**
 * find_factor - will find the factor of numbers passed through
 * @n: the number we are finding factors for.
 *
 * Description: Numbers are passed through this functions, and if
 * the number has factors (x * y = n) then the factors are passed to
 * the find_prime function to see if it is a prime number
 *
 * Return: will not return anything.
 */
void find_factor(long n)
{
	long test = 1;

	putchar('\n');
	while (test < lastTested)
	{
		if (n % test == 0)
		{
			find_prime(test);
			find_prime(n / test);
			test = test + 1;
		}
		else
			test = test + 1;
	}
}

/**
 * main - will send the number to the other functions
 * and print the highest prime number.
 *
 * Description: long description
 *
 * Return: will return 0
 */
long main(void)
{
	long x = 612852475143;
	find_factor(x);
	printf("%li is the highest prime number of %li\n", highest, x);
	return (0);
}
