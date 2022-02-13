#include <stdio.h>

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
long find_prime(long n)
{
	long i, m = 0, flag = 0;

	m = n / 2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			return (0);
		}
	}
	if (flag == 0)
	{
		return (n);
	}
	return (0);
}

/**
 * main - will find the factor of the number selected
 *
 * Description: Numbers are passed through this functions, and if
 * the number has factors (x * y = n) then the factors are passed to
 * the find_prime function to see if it is a prime number
 * each factor is tested in pairs, and the highest paired number
 * is stored so it won't bother checking numbers it
 * has already tested.
 *
 * Return: will return (0);
 */
int main(void)
{
	long x = 612852475143;
	long lastTested = x;
	long highest = 1;
	long highestYet = 0;
	long testInc = 1;

	while (testInc < lastTested)
	{
		if (x % testInc == 0)
		{
			lastTested = x / testInc;
			highestYet = find_prime(testInc);
			if (highestYet > highest)
				highest = highestYet;
			highestYet = find_prime(x / testInc);
			if (highestYet > highest)
				highest = highestYet;
		}
		testInc = testInc + 1;
	}
	printf("%li\n", highest);
	return (0);
}
