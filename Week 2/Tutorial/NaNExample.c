#include<stdio.h>
#include<math.h>

void pythagoras(float p, float b, float h){
	if (isnan(p)){
		printf("\nPerpendicular (p) = %f", sqrt(h*h-b*b));
	}
	else if(isnan(b)){
		printf("\nBase (b) = %f", sqrt(h*h-p*p));
	}
	else{
		printf("\nHypotenuse (h) = %f", sqrt(b*b + p* p));
	}
}

int main(){
	pythagoras(10.2, 20.5, NAN);
	pythagoras(NAN, 10.2, 20.5);
	pythagoras(10.2, NAN, 20.5);
	return 0;
}