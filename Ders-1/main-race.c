#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int counter = 0;

void * thread_function()
{
    for(int i = 0; i < 10000; i++)
    {
        counter++;
    }

    return NULL;
}

int main(void)
{
    pthread_t thread1, thread2;

    // Create two threads
    pthread_create(&thread1, NULL, thread_function, NULL);
    pthread_create(&thread2, NULL, thread_function, NULL);

    // Wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final counter value: %d\n", counter);
    return 0;
}