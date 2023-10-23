#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line
 * Return: Nothing
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		printf("%s", s);
	}

	printf("\n");
}
