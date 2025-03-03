#include <pthread.h>
#include <stdio.h>

// Shared counter variable
int counter = 0;

// Mutex for synchronization
pthread_mutex_t mutex;

// Thread function to increment the counter
void* increment_counter(void* arg) {
    for (int i = 0; i < 5; i++) {
        // Lock the mutex before modifying the counter
        pthread_mutex_lock(&mutex);

        // Increment the counter
        counter++;

        // Print the updated counter value
        printf("counter: %d\n", counter);

        // Unlock the mutex after modifying the counter
        pthread_mutex_unlock(&mutex);
    }
    return NULL;
}

int main() {
    // Initialize the mutex
    pthread_mutex_init(&mutex, NULL);
    pthread_t threads[5];

    // Create 5 threads
    for (int i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, increment_counter, NULL);
    }

    // Join the threads
    for (int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    return 0;
}

