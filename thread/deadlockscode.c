#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock1;
pthread_mutex_t lock2;

void* thread1_function(void* arg) {
    // Lock the first mutex
    pthread_mutex_lock(&lock1);
    printf("Thread 1: Acquired lock1\n");

    // Simulate some work
    sleep(1);

    // Now try to lock the second mutex
    printf("Thread 1: Waiting for lock2\n");
    pthread_mutex_lock(&lock2);
    printf("Thread 1: Acquired lock2\n");

    // Unlock the mutexes
    pthread_mutex_unlock(&lock2);
    pthread_mutex_unlock(&lock1);

    return NULL;
}

void* thread2_function(void* arg) {
    // Lock the second mutex
    pthread_mutex_lock(&lock2);
    printf("Thread 2: Acquired lock2\n");

    // Simulate some work
    sleep(1);

    // Now try to lock the first mutex
    printf("Thread 2: Waiting for lock1\n");
    pthread_mutex_lock(&lock1);
    printf("Thread 2: Acquired lock1\n");

    // Unlock the mutexes
    pthread_mutex_unlock(&lock1);
    pthread_mutex_unlock(&lock2);

    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    // Initialize the mutexes
    pthread_mutex_init(&lock1, NULL);
    pthread_mutex_init(&lock2, NULL);

    // Create the threads
    pthread_create(&thread1, NULL, thread1_function, NULL);
    pthread_create(&thread2, NULL, thread2_function, NULL);

    // Wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Destroy the mutexes
    pthread_mutex_destroy(&lock1);
    pthread_mutex_destroy(&lock2);

    return 0;
}
