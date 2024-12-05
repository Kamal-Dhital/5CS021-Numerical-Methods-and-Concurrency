#include <stdio.h>

int main(){
//	int userInputNumber;
//	printf("Enter the number to build triangular numbers from 1 up to that number: ");
//	scanf("%d", &userInputNumber);
//	for(int i = 1; i <= userInputNumber; i++){
//		for(int j = 1; j <= i; j++){
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//	return 0;

	int userInputNumber;
	printf("Enter the number to build triangular numbers up to that terms: ");
	scanf("%d", &userInputNumber);
	for (int i = 1; i <= userInputNumber; i++){
		int formula = (i* (i + 1)) / 2;
		printf("%d	", formula);
	}
	return 0;
}