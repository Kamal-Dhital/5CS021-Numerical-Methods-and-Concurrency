#include <stdio.h>

int main(){
	char name[5];
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Hello %s!", name);
	return 0;
}