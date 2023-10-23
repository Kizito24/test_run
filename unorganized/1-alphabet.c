#include <stdio.h>

/*
 * void print_alphabet(void): prints a-z in the lowercase
 * Return: Null
 */


void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		printf(alphabet);
		alphabet++;
	}

	printf("\n");
}
