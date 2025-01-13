#include <stdio.h>

struct student{
	char name[6];
	int roll;
};

void main(){
	struct student kamal;
	scanf("%s", kamal.name);
	scanf("%d", &kamal.roll);
	printf("Name: %s\nRoll No: %d", kamal.name, kamal.roll);
	
}