#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - short description
 * @argc: the number of arguments passed into function
 * @argv: the array containing the arguments
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
int main(int argc, char *argv[])
{
	int num1, counter = 0, coinSelect = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("0\n");
		return (1);
	}
	while (coinSelect < 5)
	{
		while (coins[coinSelect] <= num1)
		{
			num1 = num1 - coins[coinSelect];
			counter++;
		}
		coinSelect++;
	}
	printf("%d\n", counter);

	return (0);
}
