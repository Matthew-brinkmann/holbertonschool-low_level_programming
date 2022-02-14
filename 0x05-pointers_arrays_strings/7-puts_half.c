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
	int i = 0;

	if (counter % 2 == 0)
	{
		while (i < counter / 2)
		{
			i++;
		}
	} else if (counter % 2 != 0)
		while (i < (counter - 1) /2)
		{
			i++;
		}
	while (i < counter)
		{
			_putchar(str[i]);
			i++;
		}
	_putchar('\n');
}
