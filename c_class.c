#include <stdio.h>

int main ()
{

	int i, n;	
	char name[n];
	
	printf("How many letter word do you want to enter: ");
	scanf("%d", &n);

	printf("\nEnter the word: ");

	for(i = 0; i < n; i++){
		scanf("%c", &name[i]);
	}

	printf("%d", n);	

	if (n < 5)
	{
		printf("The word is less than five letters\n");
	} 
	if (n > 5) {
		printf("The word is greater than five letters\n");
	}

	return 0;
}
