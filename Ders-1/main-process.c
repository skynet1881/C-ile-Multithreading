#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int counter = 0;

int main(void)
{   
    // Create a new process
    pid_t pid = fork();
    // Child process
    if (pid == 0) {
        counter += 10;
        printf("Child process (PID %d): Counter = %d\n", getpid(), counter);
    }
    else{
        // Parent process
        counter += 1;
        printf("Parent process (PID %d): Counter = %d\n", getpid(), counter);
    }

    return 0;
}




