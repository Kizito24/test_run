#include "../main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to be matched
 *
 * Return: Pointer to the char in s matching a char in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
