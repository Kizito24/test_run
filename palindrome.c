#include <stdio.h>

int main(){
	
	int i, result=0, q, n;

	printf("Enter the number to be checked: ");
	scanf("%d", &n);

	q = n;

	while(q!=0){
		i = q % 10;
		result = result * 10 + i;
		q /= 10;
	}

	if (result == n)
		printf("\nIt is a palindrome\n");
	else
		printf("\nOops, it is not a palindrome!\n");

	return 0;
}
