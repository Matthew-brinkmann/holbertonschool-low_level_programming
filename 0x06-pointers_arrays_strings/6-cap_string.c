#include "main.h"
#include <stdio.h>
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
	int sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

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

	if (s[i] > 96 && s[i] < 123)
		s[i] = s[i] - 32;
	while (s[i] != '\0')
	{
		if (isSeperator(&s[i]) == 1)
		{
			a = i + 1;
			if (s[a] > 96 && s[a] < 123)
				s[a] = s[a] - 32;
		}
		i++;
	}
	return (s);
}
