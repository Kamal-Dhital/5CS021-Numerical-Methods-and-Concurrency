#include<stdio.h>
#include<math.h>

float velocityCalc(float u, float a, float v, float t){
	if (isnan(v)){
		v = u + (a * t);
		return v;
	} else if (isnan(u)){
		u = v - (a * t);
		return u;
	} else if (isnan(a)){
		a = (v - u)/t;
		return a;
	} else if (isnan(t)){
		t = (v-u)/a;
		return t;
	} else
}

int main(){
	
	float u = 10.0;
    float a = 2.0;
    float v = NAN;
    float t = 5.0;
    
    
	v = velocityCalc(u, a, v, t);
    printf("Final velocity (v) = %.2f m/s\n", v);

    u = NAN;
    u = velocityCalc(u, a, v, t);
    printf("Initial velocity (u) = %.2f m/s\n", u);

    a = NAN;
    a = velocityCalc(u, a, v, t);
    printf("Acceleration (a) = %.2f m/s^2\n", a);

    t = NAN;
    t = velocityCalc(u, a, v, t);
    printf("Time (t) = %.2f seconds\n", t);
    
    return 0;
}