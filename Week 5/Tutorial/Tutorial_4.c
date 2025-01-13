# include <stdio.h>

struct students{
	int roll;
	char name[50];
	char address[50];
	int marks;
};

void main(){
	struct students kamal;
	scanf("%d", &kamal.roll);
	scanf("%s", kamal.name);
	scanf("%s", kamal.address);
	scanf("%d", &kamal.marks);
	
	printf("Roll: %d,\nName: %s,\nAddress: %s, \nMarks: %d", kamal.roll, kamal.name, kamal.address, kamal.marks);
	
}