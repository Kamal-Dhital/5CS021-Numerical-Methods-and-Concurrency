#include<stdio.h>

int greatest(int x, int y){
	if (x > y){
		return x;
	} else {
		return y;
	}
}

int main(){
	int firstNumber, secondNumber;
	printf("Enter first number: ");
	scanf("%d", &firstNumber);
	printf("Enter second number: ");
	scanf("%d", &secondNumber);
	int greatNumber = greatest(firstNumber,secondNumber);
	printf("Greatest number is: %d", greatNumber);
	return 0;
}