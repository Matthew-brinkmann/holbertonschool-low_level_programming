#include <stdio.h>
/**
 * find_prime - will find if the number entered is a prime number or not
 * @n: the inputted number
 *
 * Description: This is a bit inefficient however it works, this function
 * just checks the number against every number of half its value
 * to see if the modulos (modolus)? is 0? each prime number is returned
 *
 * Return: will return the prime number if it is one, otherwise return 0
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
 * the number has factors (x % testNumber == 0) then the factors are passed to
 * the find_prime function to see if it is a prime number
 * each factor is tested in pairs, so lower number (number tested) and
 * higher number (x / number tested)
 * and the highest paired number is stored so it won't bother checking
 * numbers it has already tested. the first higher number to be prime
 * is then set as the highest and the loop breaks.
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

	printf("start checking\n");
	while (testInc < lastTested)
	{
		if (x % testInc == 0)
		{
			printf("checking number\n");
			lastTested = x / testInc;
			highestYet = find_prime(testInc);
			if (highestYet > highest)
				highest = highestYet;
/*
* these next lines will check to see if the top
* factor is a prime, and will break out of the
* loop as soon as it finds the first top
* factor prime
*/
			highestYet = find_prime(x / testInc);
			if (highestYet > highest)
			{
				highest = highestYet;
				break;
			}
		}
/*
 * these if statements will start the incrementation
 * by two after the number 2 is checked.
 */

		if (testInc < 3)
		{
			printf("testing 1 or 2\n");
			testInc = testInc + 1;
		else
			testInc = testInc + 2;
	}
	printf("%li\n", highest);
	printf("TOTAL COUNT OF LOOPS IN PROGRAM: %li\n", totalCount);
	return (0);
}
