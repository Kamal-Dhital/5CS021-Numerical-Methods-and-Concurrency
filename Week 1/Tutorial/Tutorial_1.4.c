#include <stdio.h>

/*
int main(){
	int choice;
	printf("0 for (fahrenheit to celsius) and 1 for (fahrenheit to celsius)? ");
	scanf("%d", &choice);
	if(choice == 0){
		float fahrenheit;
		printf("Enter temp in fahrenheit: ");
		scanf("%f", &fahrenheit);
		float celsius = ((fahrenheit - 32) * (5/9));
		printf("Fahrenheit %f to Celsius is %f", fahrenheit, celsius);
	}
	else if(choice == 1){
		float celsius;
		printf("Enter temp in celsius: ");
		scanf("%f", &celsius);
		float fahrenheit = ((celsius * (9/5)) + 32);
		printf("Celsius %f to Fahrenheit is %f", celsius, fahrenheit);
	} else{
		printf("Invalid Character !");
	}
	return 0;
}
*/
int main(){
	char choice;
	printf("C for (fahrenheit to celsius) and F for (fahrenheit to celsius)? ");
	scanf("%c", &choice);
	if(choice == 'C'){
		float fahrenheit;
		printf("Enter temp in fahrenheit: ");
		scanf("%f", &fahrenheit);
		float celsius = ((fahrenheit - 32) * (5/9));
		printf("Fahrenheit %f to Celsius is %f", fahrenheit, celsius);
	}
	else if(choice == 'F'){
		float celsius;
		printf("Enter temp in celsius: ");
		scanf("%f", &celsius);
		float fahrenheit = ((celsius * (9/5)) + 32);
		printf("Celsius %f to Fahrenheit is %f", celsius, fahrenheit);
	} else{
		printf("Invalid Character !");
	}
	return 0;
}