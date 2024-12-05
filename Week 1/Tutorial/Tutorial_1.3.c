#include <stdio.h>

int main(){
	int p, t;
	float r;
	printf("Enter p: ");
	scanf("%d", &p);
	printf("Enter t: ");
	scanf("%d", &t);
	printf("Enter r: ");
	scanf("%f", &r);
	float interest = (p * t * r)/100;
	printf("Interest: %f", interest);
	return 0;
}