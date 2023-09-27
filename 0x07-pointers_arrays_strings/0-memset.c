#include "../main.h"

/**
 * _memset - fille the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @n: number of bytes of memory
 * @s: pointer for the memory area
 * @b: byte to be used to fill the memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
