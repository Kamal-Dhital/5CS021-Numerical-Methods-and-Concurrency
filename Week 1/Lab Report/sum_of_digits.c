#include <stdio.h>


int main(){
	int userInput;
	printf("Enter the number you want to sum of digits: ");
	scanf("%d", &userInput);
	int sum = 0;
	while (userInput > 0){
		sum = sum + (userInput % 10);
		userInput = userInput / 10;
	}	
	printf("Sum of digits is: %d", sum);
	return 0;
}