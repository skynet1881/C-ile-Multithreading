#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// Thread function
void* thread_func(void* arg)
{
    int id = *(int*)arg;

    for (int i = 0; i < 5; i++) {
        printf("Thread %d: iteration %d\n", id, i);
        sleep(1);
    }

    return NULL;
}

int main(void)
{
    pthread_t thread1, thread2;
    int id1 = 1;
    int id2 = 2;

    // Create threads
    pthread_create(&thread1, NULL, thread_func, &id1);
    pthread_create(&thread2, NULL, thread_func, &id2);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Main thread: all threads finished\n");
    return 0;
}
