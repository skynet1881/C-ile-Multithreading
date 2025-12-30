# Introduction to Threads and POSIX Threads (pthreads)

## What Is a Thread?

A **thread** is the smallest unit of execution within a process.

- A **process** has:
  - Its own virtual address space
  - One or more threads

- A **thread**:
  - Shares the process memory (heap, globals)
  - Has its own:
    - Program counter
    - Stack
    - Registers

### Process vs Thread

| Process | Thread |
|-------|-------|
| Own address space | Shared address space |
| Heavy to create | Lightweight |
| IPC needed to share data | Direct memory access |
| Isolated | Can cause race conditions |

---

## Why Use Threads?

Threads are used to:
- Perform tasks **in parallel**
- Improve **responsiveness**
- Utilize **multiple CPU cores**
- Separate blocking work (I/O, sleep, wait)

### Example Use Cases
- Video processing pipelines
- Network servers
- Embedded services
- Producer–consumer systems

---

## What Are POSIX Threads (pthreads)?

**pthreads** is a **standardized threading API** defined by POSIX.

- Available on:
  - Linux
  - UNIX
  - Embedded Linux systems
- Implemented by:
  - `glibc` (Linux)
  - `musl`
  - RTOS POSIX layers

Threads created with pthreads:
- Run inside the same process
- Share memory
- Are scheduled by the OS kernel

---

## How pthreads Work (Conceptually)

1. The main thread starts when the program begins
2. New threads are created using `pthread_create()`
3. Each thread runs a function concurrently
4. Threads may:
   - Share data
   - Synchronize using mutexes/condition variables
5. Threads exit or are joined using `pthread_join()`

---

## Simple pthread Example

```c
#include <pthread.h>
#include <stdio.h>

void* thread_func(void* arg)
{
    printf("Hello from thread\n");
    return NULL;
}

int main(void)
{
    pthread_t thread;

    pthread_create(&thread, NULL, thread_func, NULL);
    pthread_join(thread, NULL);

    return 0;
}
