#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i, ac_add;
	size_t __attribute__((unused)) characts, arg_len;
	char *buffer;

	ac_add = ac - 1;
	for(i = 0; i < ac; i++)
	{
		arg_len = arg_len + strlen(av[i]);
	}

	arg_len = arg_len + ac_add;
	
	buffer = (char *)malloc(arg_len * sizeof(char));
	if(buffer == NULL)
	{
		perror("UNable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	characts = getline(&buffer, &arg_len, stdin);
	printf("%s", buffer);

	return(0);
}
