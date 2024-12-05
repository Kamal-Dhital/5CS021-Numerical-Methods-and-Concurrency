#include<stdio.h>

void add(int x, int y){
	printf("Sum is: %d", x+y);
//	return x+y;
}

int main(){
	int x = 10;
	int y = 20;
//	int result = add(x,y);
//	printf("Sum in main function: %d", result);
	add(x,y);
	return 0;
}