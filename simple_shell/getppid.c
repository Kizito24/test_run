#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("The id for the parent process of the current\n running process is  %u\n", ppid);
	return(0);
}
