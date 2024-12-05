#include<stdio.h>

void modify(int *num){
	*num = 20;
	printf("Value of num in Modify function: %d\n", *num);
}

int main(){
	int num = 10;
	printf("Value of num in main function: %d\n", num);
	modify(&num);
	printf("Value of num in after passing to function: %d", num);
	return 0;
}