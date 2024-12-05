#include <stdio.h>

int main(){
	int userInput;
	printf("Enter the number to find the factorial of it: ");
	scanf("%d", &userInput);
	int factorial = 1;
	for(int i = 1; i <= userInput; i++){
		factorial *= i;
	}
	printf("Factorial is: %d", factorial);
	return 0;
}