#include <stdio.h>


int main(){
	int userInputNumber;
	printf("Enter the number to build triangular numbers up to that terms: ");
	scanf("%d", &userInputNumber);
	for (int i = 1; i <= userInputNumber; i++){
		int formula = (i* (i + 1)) / 2;
		printf("%d	", formula);
	}
	return 0;
}