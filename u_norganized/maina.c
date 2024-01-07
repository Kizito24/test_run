#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

	fp = fopen("reding.txt", "w");
	fprintf(fp, "%s", "Hello, world");
	fclose(fp);
	return (0);
}
