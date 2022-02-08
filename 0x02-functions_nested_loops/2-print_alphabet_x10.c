#include "main.h"

/**
 * print_alphabet-x10 - short description
 *
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count <= 9)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
		{
			_putchar(letter);
		}
	_putchar('\n');
	count++;
	}
}
