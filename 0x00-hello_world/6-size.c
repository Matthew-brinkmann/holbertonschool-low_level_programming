#include <stdio.h>
#include <curses.h>
/**
 * main - printing the size of differnt file types
 *
 * Description: using the sizeof function to call the size of each file type
 * then to input that into the string to display what size they are.
 *
 * Return: will return 0 in this case
 */
int main(void)
{
 	printf("Size of a char: %2d byte(s) \n", sizeof(char));
	printf("Size of a int: %2d byte(s) \n", sizeof(int));
	printf("Size of a long int: %2d byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s) \n", sizeof(long int *));
	printf("Size of a float: %2d byte(s) \n", sizeof(float));
	return (0);
}
