#include <stdio.h>

struct employee{
	char empName[30];
	int age;
	double salary;
};

int main(){
	struct employee e[3];
	
	for(int i = 0; i < 3; i++){
		printf("Enter employee details (name, age and salary) respectively: ");
		scanf("%s", e[i].empName);
		scanf("%d", &e[i].age);
		scanf("%lf", &e[i].salary);	
	}
	
	FILE *fptr;
	fptr = fopen("employee.txt", "w");
	
	for (int i = 0; i < 3; i++){
		fprintf(fptr, "Name: %s, Age: %d, Salary: %lf\n", e[i].empName, e[i].age, e[i].salary);	
	}

	
}