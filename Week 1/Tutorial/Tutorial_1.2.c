#include <stdio.h>

int main(){
	int num1, num2; 
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	int sum = num1 + num2;
	printf("Sum of %d and %d is: %d", num1, num2, sum);
	return 0;
}