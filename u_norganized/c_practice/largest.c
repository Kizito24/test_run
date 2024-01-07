#include <stdio.h>

/**
 * main - Find the largest of 3 numbers
 *
 * Return: O if successful
 */

int main(void)
{
	int a, b, c, largest = 0;

	printf("Enter the first number\n");
	scanf("%d", &a);
	printf("Enter the second number\n");
        scanf("%d", &b);
	printf("Enter the third number\n");
        scanf("%d", &c);

	if (a > b)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b > a)
		{
			if (b > c)
				largest = b;
			else
				largest = c;
		}
	}

	printf("The largest of all three numbers is %d\n", largest);

	return (0);
}
