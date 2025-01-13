#include<stdio.h>

int main(){
	int numchoice;
	printf("Enter how many number you want to give: ");
	scanf("%d", &numchoice);
	int numarr[numchoice];
	for (int i =0; i < numchoice; i++){
		scanf("%d", &numarr[i]);
	}
	int sum = 0;
	for(int i = 0; i < numchoice; i++){
		sum += numarr[i];
	}
	FILE *fptr;
	fptr = fopen("sum.txt", "a");
	fprintf(fptr, "%d", sum);
	fclose(fptr);
}