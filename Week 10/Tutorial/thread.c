// ? Division of threads dynamically

#include <stdio.h>
#include <pthread.h>

int sqList[1000];

struct sq
{
    int start, end;
};

void *smallFunction(void *arg)
{
    struct sq *s1;
    s1 = (struct sq *)arg;
    int startPoint = s1->start;
    int endPoint = s1->end;
    for (int i = startPoint; i <= endPoint; i++)
    {
        sqList[i - 1] = i * i;
    }
    for (int i = startPoint; i < endPoint; i++)
    {
        printf("Square of %d is: %d\n", i, sqList[i - 1]);
    }
}

int main()
{
    int count = 1000;
    int threadCount, i;
    printf("Enter the number of thread: ");
    scanf("%d", &threadCount);
    int sliceList[threadCount];
    int remainder = count % threadCount;
    for (i = 0; i < threadCount; i++)
    {
        sliceList[i] = count / threadCount;
    }

    for (i = 0; i < remainder; i++)
    {
        sliceList[i] = sliceList[i] + 1;
    }

    for (i = 0; i < threadCount; i++)
    {
        printf("Data for Thread %d is %d\n", i + 1, sliceList[i]);
    }

    int startList[threadCount];
    int endList[threadCount];

    for (i = 0; i < threadCount; i++)
    {
        if (i == 0)
        {
            startList[i] = 1;
        }
        else
        {
            startList[i] = endList[i - 1] + 1;
        }
        endList[i] = startList[i] + sliceList[i] - 1;
    }

    struct sq s[threadCount];
    for (i = 0; i < threadCount; i++)
    {
        s[i].start = startList[i];
        s[i].end = endList[i];
    }

    pthread_t threadId[threadCount];
    for (i = 0; i < threadCount; i++)
    {
        pthread_create(&threadId[i], NULL, smallFunction, &s[i]);
    }

    for (i = 0; i < threadCount; i++)
    {
        pthread_join(threadId[i], NULL);
    }
}