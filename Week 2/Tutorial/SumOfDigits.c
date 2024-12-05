#include<stdio.h>


int sumofdigits(float num){
	if (num < 10){
		return num;
	}
	else{
		float sum = sumofdigits(num / 10);
		return sum;
	}
}

int main(){
	float num;
	printf("Enter the number to find the sum to that number from 0: ");
	scanf("%d", &num);
	float sum = sumofdigits(num);
	printf("%d", sum);
	return 0;
}