#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// Thread function
void* thread_func(void* arg)
{
    int id = *(int*)arg;

    for(int i=0; i<5; i++)
    {
        printf("Thread %d: iteration %d\n", id, i);
        sleep(1);
    }

    return NULL;
}

int main(void)
{
    pthread_t thread1, thread2;
    int id1 = 1, id2 = 2;

    // Create two threads
    pthread_create(&thread1, NULL, thread_func, &id1);
    pthread_create(&thread2, NULL, thread_func, &id2);
    
    // Wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Both threads have finished execution.\n");

    return 0;
}
