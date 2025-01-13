#include<stdio.h>

int main(){
	FILE *oddptr, *evenptr, *numptr;
	oddptr = fopen("odd.txt", "r");
	evenptr = fopen("even.txt", "r");
	
	numptr = fopen("numbers.txt", "w");
	
	char ch;
	while ((ch = fgetc(oddptr)) != EOF) {
        fputc(ch, numptr);
    }
    
	while ((ch = fgetc(evenptr)) != EOF) {
    	fputc(ch, numptr);
	}
	fclose(evenptr);
	fclose(oddptr);
	fclose(numptr);
}