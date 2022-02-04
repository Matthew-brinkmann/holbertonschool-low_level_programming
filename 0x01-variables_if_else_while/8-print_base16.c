#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description:prints numbers
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 102 ; ++n)
	{
		if (n < 58 || n > 96)
		putchar(n);
	}
	putchar('\n');
	return (0);
}
