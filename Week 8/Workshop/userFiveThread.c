#include <stdio.h>
#include <pthread.h>

void *firstFunction(void *args)
{
    for (int i = 1; i < 200; i++)
    {
        printf("First-Function: %d\n", i);
    }
    return NULL;
}

void *secondFunction()
{
    for (int i = 200; i < 400; i++)
    {
        printf("Second-Function: %d\n", i);
    }
    return NULL;
}

void *thirdFunction()
{
    for (int i = 400; i < 600; i++)
    {
        printf("Third-Function: %d\n", i);
    }
    return NULL;
}

void *forthFunction()
{
    for (int i = 600; i < 800; i++)
    {
        printf("Forth-Function: %d\n", i);
    }
    return NULL;
}

void *fifthFunction()
{
    for (int i = 800; i < 1000; i++)
    {
        printf("Fifth-Function: %d\n", i);
    }
    return NULL;
}

int main()
{
    int numThread;
    printf("Enter the number of thread you want: ");
    scanf("%d", &numThread);
    for (int i = 0; i < numThread; i++)
    {
        pthread_t thread[i];
        pthread_create(&thread[i], NULL, firstFunction, NULL);
        pthread_join(thread[i], NULL);
    }
    // pthread_create(&thread2, NULL, secondFunction, NULL);
    // pthread_create(&thread3, NULL, thirdFunction, NULL);
    // pthread_create(&thread4, NULL, forthFunction, NULL);
    // pthread_create(&thread5, NULL, fifthFunction, NULL);
    // pthread_join(thread2, NULL);
    // pthread_join(thread3, NULL);
    // pthread_join(thread4, NULL);
    // pthread_join(thread5, NULL);
    return 0;
}