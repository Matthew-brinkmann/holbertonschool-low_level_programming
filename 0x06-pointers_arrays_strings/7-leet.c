#include "main.h"

/**
* isEncode - check if character needs replacement..
* @s: the characters to check if needs replacement
* Description: long description
*
* Return: nothing.
*/
void isEncode(char *s)
{
	int i = 0;
	int orig[13] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int new[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (i < 10)
	{
		if (*s == orig[i])
			*s = new[i];
		i++;
	}
}
/**
 * leet - change string to leet encoding.
 * @s: the characters to change to leet.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		isEncode(&s[i]);
		i++;
	}
	return (s);
}
