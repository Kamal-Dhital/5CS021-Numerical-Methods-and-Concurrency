#include<stdio.h>

int main(){
	FILE *fptr;
	char ch;
	
	fptr = fopen("employee.txt", "r");
	while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
	fclose(fptr);
}