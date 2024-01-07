#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Mian program started");
	char *argv[] = {"jam", "jams", NULL};
	char *envp[] = {"some", "environment", NULL};

	if (execve("./sub", argv, envp) == -1)
		perror("Could not execve.");

	return (1);
