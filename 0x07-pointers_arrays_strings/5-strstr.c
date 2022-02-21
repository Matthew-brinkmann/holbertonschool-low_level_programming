#include "main.h"

/**
 * is_full_word - will see if matching full word
 * @start: the starting memory location to look from
 * @test: the characters in the momeory we are testing
 * Description: long description
 *
 * Return: the length of the string
 */
int is_full_word(char *start, char *test)
{
	int x = 0;

	while (test[x] != '\0')
	{
		if (test[x] == start[x])
		{
			x++;
		} else if (test[x] != start[x])
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _strstr - will search for first instance of needle in haystack
 * @haystack: thi si sthe string to search
 * @needle: this is what i am loking for
 * Description: long description
 *
 * Return: will return pointer to begining to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int sCount = 0;
	int test = 0;

	while (haystack[sCount] != '\0')
	{
		if (needle[0] == haystack[sCount])
		{
			test = is_full_word(&haystack[sCount], needle);
			if (test == 1)
				return (&haystack[sCount]);
		}
		sCount++;
	}
	return (0);
}
