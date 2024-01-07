#include <stdio.h>

int main(int __attribute__((unused)) ac, char **av)
{
	unsigned int i;

	for( i = 0; *av[ i ]; i++)
		printf("%s\n", av[i]);

	return (0);
}
