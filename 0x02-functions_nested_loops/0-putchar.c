#include "main.h"

/**
 * main - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(void)
{
	char x[8] = "_putchar";
	int letter;

	for (letter = 0; letter <= 7; letter++)
	{
		_putchar(x[letter]);
	}
	_putchar('\n');
	return (0);
}
