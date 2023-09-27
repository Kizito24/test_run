#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
			printf(" %d, ", n);
	}
	else
		for (; n > 97; n--)
			printf(" %d, ", n);

	printf("\n");
}
