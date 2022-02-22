#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: inital number rasied to the power y
 * @y: the number x is raised to the power of.
 * Description: long description
 *
 * Return: factorial of number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
