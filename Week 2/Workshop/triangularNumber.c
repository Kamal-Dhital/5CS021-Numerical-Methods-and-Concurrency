#include <stdio.h>

int main(){
	int userInput;
	printf("Enter the number: ");
	scanf("%d", &userInput);
	
	for(int i = 1; i <= userInput; i++){
		int formula = (i * (i+1)) / 2;
		printf("%d ", formula);
	}
	
	return 0;
}