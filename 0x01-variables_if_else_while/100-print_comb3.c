#include <stdio.h>
/**
 * main - prints numbers
 *
 * Description:prints all possible different combinations of two digits.
 *
 * Return: return 0
 */
int main(void)
{
	int a = '0';
	int b = '0';

	do {
		do {
			if (a == b)
			{
				b++;
			}
			else if (b < a)
			{
				b++;
			}
			else
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				b++;
			}
		} while (b <= '9');
		a++;
		b = '0';
	} while (a <= '9');
	putchar('\n');
	return (0);
}
