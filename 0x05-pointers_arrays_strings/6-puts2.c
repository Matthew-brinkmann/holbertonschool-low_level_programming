#include "main.h"

/**
 * puts2 - prints every second line of a string
 * @str: string to display
 * Description: long description
 *
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
