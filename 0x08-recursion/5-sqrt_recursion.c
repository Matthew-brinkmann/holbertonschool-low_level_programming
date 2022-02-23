#include "main.h"

/**
 * _sqrt_guess - cycles through guess numbers to find answer
 * @n: number to square root of parsed from main
 * @guess: guess number starting from 1
 * Description: long description
 *
 * Return: square of number if one exists other return -1.
 */
int _sqrt_guess(int n, int guess)
{
	if (guess > n / 2)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
		return (_sqrt_guess(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - find the square root of the number
 * @n: number to square root of
 * Description: long description
 *
 * Return: square of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_guess(n, 1));
}
