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

	for (n = '0'; n <= '9'; ++n)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
