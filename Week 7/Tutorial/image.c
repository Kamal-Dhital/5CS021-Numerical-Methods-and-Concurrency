#include<stdio.h>
#include "lodepng.h"

int main(){
	
	unsigned char* image;
	int w, h, r, g, b, t;
	lodepng_decode32_file(&image, &w, &h, "test1.png");
	printf("The width of the image is: %d\n", w);
	printf("The height of the image is: %d\n", h);
	
//	for (int i = 0; i < h*w*4; i = i+4){
//		image[i] = 255-image[i];
//		image[i+1] = 255 - image[i+1];
//		image[i+2] = 255 -image[i+2];
//		printf("%3d %3d %3d %3d\n", image[i], image[i+1], image[i+2], image[i+3]);
//	}

	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			int index = (i*w+j) * 4;
			r = image[index];
			g = image[index + 1];
			b = image[index + 2];
			t = image[index + 3];
			printf("%3d %3d %3d %3d|\t",r,g,b,t);
		}
		printf("\n");
	}
//	lodepng_encode32_file("output.png", image, w, h);
	return 0;
}