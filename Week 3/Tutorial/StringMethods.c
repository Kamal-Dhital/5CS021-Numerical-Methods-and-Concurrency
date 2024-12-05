#include <stdio.h>
#include <string.h>

void stringMethod(char s1[], char s2[]){
	printf("Length of string 1 is %d and string 2 is %d\n", strlen(s1), strlen(s2));
	printf("Concatenation of string 1 and string 2 is: %c\n", strcat(s1, s2));
	printf("Check either s1 and s2 are same string or not: %c\n", strcmp(s1,s2));
	char s3[6];
	strcpy(s1, s3);
	printf("Copy String: %c\n", s3);
}

int main(){
	char myName[6] = "Kamal";
	char yourName[6] = "Anush";
	
	stringMethod(myName, yourName);
	return 0;
}