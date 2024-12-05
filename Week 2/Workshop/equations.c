#include<stdio.h>

void equations(double a, double b, double c, double d, double e, double f){
	float y, x;
	y = ((d * c) - (a * f))/ ((d * b) - (a * e));
	x = (c - (b * y)) / a;
	printf("X Coordinate is: %f\n", x);
	printf("Y Coordinate is: %f\n", y);
}

int main(){
	double a = 1.0, b = 2.0, c = 3.0, d = 4.0, e = 5.0, f = 6.0;
	equations(a,b,c,d,e,f);
	return 0;
	
}