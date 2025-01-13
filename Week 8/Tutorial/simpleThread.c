#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *func1(void *arg)
{
	for (int i = 1; i < 1000; i++)
	{
		printf("First Function: %d\n", i);
	}
	return NULL;
}

void *func2(void *arg)
{
	for (int i = 1000; i < 2000; i++)
	{
		printf("Second Function: %d\n", i);
	}
	return NULL;
}

int main()
{
	pthread_t thread1, thread2;
	pthread_create(&thread1, NULL, func1, NULL);
	//	func2();
	pthread_create(&thread2, NULL, func2, NULL);
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	return 0;
}