#include "main.h"

/**
 * _strlen - will return the length of the string passed through
 * @s: the string we need to count
 * Description: long description
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	char string = *s;
	int counter = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}
	return (counter);
}
/**
 * puts_half - short description
 * @str: string we want to print half of.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void puts_half(char *str)
{
	int counter = _strlen(str);
	int i = 0, n;

	if (counter % 2 == 0)
	{
		n = counter / 2;
	} else
	{
		n = (counter - 1) / 2;
	}
	while (i <= counter)
	{
		if (i > (counter - n))
			_putchar(str[i - 1]);
		i++;
	}
	_putchar('\n');
}
