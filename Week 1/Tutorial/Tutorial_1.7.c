#include <stdio.h>

int main(){
	int firstNumber, secondNumber, thirdNumber;
	printf("Enter first number, second number and third number respectively.\n");
	scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);
	if (firstNumber > secondNumber && firstNumber > thirdNumber){
		printf("Greatest number is first number with value %d.", firstNumber);
	} else if (secondNumber > thirdNumber && secondNumber > thirdNumber){
		printf("Greatest number is second number with value %d.", secondNumber);
	}else{
		printf("Greatest number is third number with value %d.", thirdNumber);
	}
	return 0;
}