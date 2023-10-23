#include "variadic_functions.h"

/**
 * print_strings -  prints a string, then a new line.
 * @*seperator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int *arr = malloc(sizeof(int) * n);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ptr, char *) == NULL)
			arr[i] = 0;
		else
			arr[i] = 1;
	}
	va_end(ptr);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ptr, char *));
		if (i < (n - 1) && seperator)
			printf("%s", seperator);
	}
	va_end(ptr);

	printf("\n");
}
