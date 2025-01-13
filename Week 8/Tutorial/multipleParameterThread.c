#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

struct num{
	int a, b;
};

void* add(void* arg){
	struct num* s1;
	s1 = (struct num*)arg;
	printf("Sum is: %d\n", s1->a + s1->b);
	pthread_exit(NULL);	
}

void* product(void* arg){
	struct num* s1;
	s1 = (struct num*)arg;
	printf("Product is: %d\n", s1->a * s1->b);
	pthread_exit(NULL);	
}


int main(){
	struct num s = {1,2};
	pthread_t thread1, thread2;
	pthread_create(&thread1, NULL, add, &s);
	pthread_create(&thread2, NULL, product, &s);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return 0;
}