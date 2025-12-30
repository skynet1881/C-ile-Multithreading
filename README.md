# C-ile-Multithreading
C ile Multithreading dersileri notlari

## Giris
gcc -pthread main.c -o main

## Ders 1: Thread Olusturma
- Thread nedir?  
- Process vs Thread  
API: 
- pthread_create
- pthread_join

## Ders 2: Mutex
- Mutex nedir?
- Critical Section
- Locking vs blocking
API:
- pthread_mutex_init
- pthread_mutex_lock
- pthread_mutex_unlock
- pthread_mutex_destroy

## Ders 3: Thread Yasam Dongusu
- Thread states
- Thread attributes
- Detached vs Joinable threads
API: 
- pthread_attr_init
- pthread_attr_setdetachstate
- pthread_detach

## Ders 4: Thread Argumanlari
- Stack vs Heap threaded programlama
- Thread function argumanlari
- Struct kullanimi
API:
- void* arguman
- Thread safe memory allocation

## Ders 5: Thread'den Donus Degeri
- pthread_exit kullanimi
- pthread_join ile donus degeri alma
API:
- pthread_exit
- pthread_join

## Ders 6: Kosul Degiskenleri (Condition Variables)
- Neden mutex yetersiz?
- Producer-Consumer problemi
- Spurious wakeups
API:
- pthread_cond_init
- pthread_cond_wait
- pthread_cond_signal
- pthread_cond_broadcast

## Ders 7: Read-Write Locks
- Okuma agir ve yazma agir 
- Mutex vs Read-Write Locks
API:
- pthread_rwlock_init
- pthread_rwlock_rdlock
- pthread_rwlock_wrlock
- pthread_rwlock_unlock

## Ders 8: Thread Synchronization 
- Barriers nedir?
- Thread senkronizasyonu
API:
- pthread_barrier_init
- pthread_barrier_wait

## Ders 9: Thread Cancelation and Cleanup
- Thread iptali nedir?
- Cleanup handlers
API:
- pthread_cancel
- pthread_cleanup_push
- pthread_cleanup_pop

## Ders 10: Thread Safety and Reentrancy
- Thread-safe fonksiyonlar
- Non-thread-safe fonksiyonlar
- Reentrant fonksiyonlar
API:
- errno

## Ders 11: Performance ve Debugging
- False sharing nedir?
- Lock contention
- Debugging multithreaded uygulamalar
API:
- gdb
- valgrind
- logging

## Ders 12: Example
- Thread pool implementasyonu
- Task queue

## Ders 13: Github Link



