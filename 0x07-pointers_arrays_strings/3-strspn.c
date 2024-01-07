#include "../main.h"

/* _strspn - gets the length of a prefix substring
 * @s: initial segment 
 * @accept: string to be compared
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, x = 0;
	int i, j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
		x++;
		if (n == 0 || x != n)
			break;
	}
	return (n);
}
