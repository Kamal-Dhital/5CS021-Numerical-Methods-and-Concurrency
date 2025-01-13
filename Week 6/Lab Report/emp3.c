#include<stdio.h>

struct employee{
	char empName[30];
	int age;
	double salary;
};

int main(){
	struct employee e[1];
	
	printf("Enter employee details (name, age and salary) respectively: ");
	scanf("%s", e[1].empName);
	scanf("%d", &e[1].age);
	scanf("%lf", &e[1].salary);	
		
	FILE *fptr;
	fptr = fopen("employee.txt", "a");
	
	fprintf(fptr, "Name: %s, Age: %d, Salary: %lf\n", e[1].empName, e[1].age, e[1].salary);
}