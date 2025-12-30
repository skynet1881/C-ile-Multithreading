#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int counter = 0;
pthread_mutex_t lock;

void * thread_function(void * arg)
{
    for (int i=0; i<100000; i++)
    {
        // Crotical section
        // Lock the mutex before updating the counter
        pthread_mutex_lock(&lock);
        counter++;
        // Unlock the mutex
        pthread_mutex_unlock(&lock);
    }

    return NULL;
}

int main(void)
{
    pthread_t thread1, thread2, thread3;

    // Initialize the mutex
    pthread_mutex_init(&lock, NULL);

    // Create two threads
    pthread_create(&thread1, NULL, thread_function, NULL);
    pthread_create(&thread2, NULL, thread_function, NULL);
    pthread_create(&thread3, NULL, thread_function, NULL);

    // Wait for both threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    // Destroy the mutex
    pthread_mutex_destroy(&lock);

    printf("Final counter value: %d\n", counter);

    return 0;
}