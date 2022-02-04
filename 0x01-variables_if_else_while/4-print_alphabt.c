#include <stdio.h>

/**
 * main - prints alphabet except q and e
 *
 * Description:prints alphabet
 *
 * Return: return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a';letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
