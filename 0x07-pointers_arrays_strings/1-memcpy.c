#include "../main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be cpoied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: poitner to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
