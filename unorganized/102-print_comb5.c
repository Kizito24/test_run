#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		int j;

		for (j = 0; j < 101; j++)
		{
			printf(" %d, %d", i, j);
		}
	}

	return (0);
}
