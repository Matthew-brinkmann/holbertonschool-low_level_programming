#include "main.h"

/**
 * print_rev - will print a string in reverse.
 * @s: the string we want to print in reverse
 * Description: long description
 *
 * Return:will return nothing
 */
void print_rev(char *s)
{
	char string = *s;
	int counter = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}

	while (counter >= 0)
	{
		string = *(s + counter);
		_putchar(string);
		counter--;
	}
	_putchar('\n');
}
