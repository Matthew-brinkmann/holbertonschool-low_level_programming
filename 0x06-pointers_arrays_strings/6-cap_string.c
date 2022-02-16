#include "main.h"

/**
* isSeperator - check if previous charater is a seperator..
* @s: the characters to check if seperator
* Description: long description
*
* Return: return 1 if seperator or 0 if not.
*/
int isSeperator(char *s)
{
	int i = 0;
	int sep[13] = {',', ';', '.', '!', '?', '\"', '(', ')', '{', '}',
		       '\n', ' ', '\t'};
	while (i < 13)
	{
		if (*s == sep[i])
			return (1);
		i++;
	}
	return (0);
}
/**
 * cap_string - change string to upper case.
 * @s: the characters to change to uppercase.
 * Description: long description
 *
 * Return: add in what is supposed to be returned if anything
 */
char *cap_string(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			a = i - 1;
			if (isSeperator(&s[a]) == 1)
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
