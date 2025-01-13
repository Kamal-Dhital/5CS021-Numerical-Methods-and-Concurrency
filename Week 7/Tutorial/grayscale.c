#include<stdio.h>
#include "lodepng.h"

int main(){
	
	unsigned char* image;
	int w, h, r, g, b, t;
	lodepng_decode32_file(&image, &w, &h, "test1.png");
	printf("The width of the image is: %d\n", w);
	printf("The height of the image is: %d\n", h);
	
	for (int i = 0; i < h*w*4; i = i+4){
		int gray = (image[i] + image[i+1] + image[i+2])/3;
		image[i] = gray;
		image[i+1] = gray;
		image[i+2] = gray;
		
		printf("%3d %3d %3d %3d\n", image[i], image[i+1], image[i+2], image[i+3]);
	}

	lodepng_encode32_file("grayoutput.png", image, w, h);
	return 0;
}