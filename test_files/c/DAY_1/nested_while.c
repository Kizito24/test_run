#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 4)
	{
		int j = 0;

		while (j < 5)
		{
			printf("#");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
