#include "../main.h"

/**
 * _strchr - locates a character in a string
 * @s: string in which the character is to be located
 * @c: character to be located
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return(&s[i]);
	}
	return (NULL);
}
