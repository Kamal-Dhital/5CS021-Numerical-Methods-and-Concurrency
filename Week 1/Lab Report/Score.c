#include <stdio.h>

int main(){
	int finalScore;
	printf("Enter final score: ");
	scanf("%d", &finalScore);
	if (finalScore > 100){
		printf("Invalid Score");
	} else if (finalScore > 80){
		printf("Distinction");
	} else if(finalScore > 60){
		printf("First Division");
	} else if(finalScore > 50){
		printf("Second Division");
	} else if(finalScore > 40){
		printf("Third Division");
	} else{
		printf("Fail");
	}
	
	return 0;
}