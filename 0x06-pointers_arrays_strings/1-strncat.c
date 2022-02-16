#include "main.h"

/**
 * int _strlen(char *s) - add src to the end of dest
 * @s: the string we want to count.
 * Description: long description
 *
 * Return: count
 */
int _strlen(char *s)
{
	char string = *s;
	int counter = 0;

	while (string != '\0')
	{
		counter++;
		string = *(s + counter);
	}
	return (counter);
}
/**
 * _strncat(char *dest, char *src, int n) - add src to the end of dest until n.
 * @dest: will be the string that is added too
 * @src: the string to copy
 * @n: the amount of src to copy
 * Description: long description
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int startCopy = _strlen(dest);
	int i = 0;

	while (src[i] < src[n])
	{
		dest[startCopy] = src[i];
		i++;
		startCopy++;
	}
	return (dest);
}
