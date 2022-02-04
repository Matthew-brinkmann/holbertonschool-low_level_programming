#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Description:prints alphabet
 *
 * Return: return 0
 */
int main(void)
{
	char letter;
	char bletter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	for (bletter = 'A'; bletter <= 'Z'; ++bletter)
	{
		putchar(bletter);
	}
	putchar('\n');
	return (0);
}
