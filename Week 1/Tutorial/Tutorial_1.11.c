#include <stdio.h>

int main(){
	int num;
	printf("Enter the number to find its multiplication table: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= 10; i++){
		printf("%d * %d = %d", num, i, num*i);
		printf("\n");
	}
	return 0;
}