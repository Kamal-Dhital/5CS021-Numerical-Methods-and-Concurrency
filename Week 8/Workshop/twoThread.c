#include <stdio.h>
#include <pthread.h>

void *firstFunction(void *args)
{
    for (int i = 1; i < 500; i++)
    {
        printf("First Function: %d\n", i);
    }
    return NULL;
}

void *secondFunction()
{
    for (int i = 500; i < 1000; i++)
    {
        printf("Second Function: %d\n", i);
    }
    return NULL;
}

int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, firstFunction, NULL);
    pthread_create(&thread2, NULL, secondFunction, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return 0;
}