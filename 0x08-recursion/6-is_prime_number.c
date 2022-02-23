#include "main.h"
#include <stdio.h>
/**
 * _sqrt_guess - cycles through guess numbers to find answer
 * @n: number to find if prime
 * @guess: guess number starting from 1
 * Description: long description
 *
 * Return: 1 if prime, 0 if not
 */
int _sqrt_guess(int n, int guess)
{
	if (guess == n)
	{
		return (1);
	}
	if (n % guess == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_guess(n, guess + 1));
	}
}

/**
 * is_prime_number - find if prime.
 * @n: number to find if prime
 * Description: long description
 *
 * Return: square of number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_sqrt_guess(n, 2));
	}
}
