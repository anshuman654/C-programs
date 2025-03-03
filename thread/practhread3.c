#include <stdio.h>
#include <pthread.h>

// Function to be executed by each thread
void* print_thread_id(void* arg) {
    int thread_number = *((int*)arg);  // Dereference the passed argument to get thread number
    printf("Currently Running thread: %d\n", thread_number);
    return NULL;
}

int main() {
    pthread_t threads[5];  // Array to hold thread IDs
    int thread_numbers[5] = {1, 2, 3, 4, 5};  // Array to hold thread numbers (IDs)

    // Create 5 threads
    for (int i = 0; i < 5; i++) {
        // Pass the thread number to the thread function
        if (pthread_create(&threads[i], NULL, print_thread_id, (void*)&thread_numbers[i]) != 0) {
            perror("Thread creation failed");
            return 1;
        }
    }

    // Wait for all threads to finish before exiting
    for (int i = 0; i < 5; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Thread join failed");
            return 1;
        }
    }

    return 0;
}

