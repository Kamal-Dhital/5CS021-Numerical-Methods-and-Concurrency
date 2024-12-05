#include<stdio.h>

void midpoint(float x1,float x2,float y1,float y2){
	float xmid = (x1+x2)/2;
	float ymid = (y1+y2)/2;
	printf("%f\n", xmid);
	printf("%f", ymid);
}

int main(){
	midpoint(2,1,3,1);
	return 0;
}