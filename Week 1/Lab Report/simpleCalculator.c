#include <stdio.h>

int main(){
	int firstNumber, secondNumber;
	char operation;
	printf("Enter first number: ");
	scanf("%d", &firstNumber);
	printf("Enter second number: ");
	scanf("%d", &secondNumber);
	printf("Enter the operator to perform calculation: ");
	scanf(" %c", &operation);
	
	switch (operation){
		case '+':
			printf("Addition: %d", (firstNumber + secondNumber));
			break;
		case '-':
			printf("Subtraction: %d", (firstNumber - secondNumber));
			break;
		case '*':
			printf("Multiplication: %d", (firstNumber * secondNumber));
			break;
		case '/':
			printf("Division: %d", (firstNumber / secondNumber));
			break;
		case '%':
			printf("Remainder: %d", (firstNumber % secondNumber));
			break;
		default:
			printf("Enter a valid character!!!");
	}
	
	return 0;
}