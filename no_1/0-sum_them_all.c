#include <stdarg.h>

/**
 * sum_them_all - Finds the sum of all its parameters
 * @n: first argument
 * ...: other variable arguments
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
