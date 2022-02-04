#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description:prints numbers 1 - 9 with
 *commar and space
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
