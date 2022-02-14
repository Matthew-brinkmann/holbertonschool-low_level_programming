#include "main.h"

/**
 * _strlen - counts length of string
 * @s: string to count
 * Description: long description
 *
 * Return: string length
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
 * puts2 - prints every second line of a string
 * @str: string to display
 * Description: long description
 *
 * Return: nothing
 */
void puts2(char *str)
{
	char newString = *str;
	int counter;
	int i = 0;

	counter = _strlen(str);
	while (i >= 0 && i < counter)
	{
		newString = *(str + i);
		_putchar(newString);
		i = i + 2;
	}
	_putchar('\n');
}
