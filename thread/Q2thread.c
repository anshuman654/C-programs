#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int mail = 0;  // Global variable for counting mails
pthread_mutex_t mutex;  // Mutex to ensure thread safety

void* routine(void* arg) {
    // Lock mutex to avoid race condition
    pthread_mutex_lock(&mutex);
    mail++;  // Increment the mail count
    pthread_mutex_unlock(&mutex);  // Unlock the mutex
    
    return NULL;  // Return from the thread function
}

int main(int argc, char* argv[]) {
    pthread_t th[4];  // Array of thread IDs
    int i;

    // Initialize the mutex
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        perror("Mutex initialization failed");
        return 1;
    }

    // Create threads
    for (i = 0; i < 4; i++) {
        if (pthread_create(&th[i], NULL, routine, NULL) != 0) {
            perror("Failed to create thread");
            
        }
        printf("Thread %d has started\n", i);
    }  
    for (i = 0; i < 4; i++) {
    
    if (pthread_join(th[i], NULL) != 0) {
            perror("Failed to join thread");
          
        }
	 printf("Thread %d has finished\n", i);
    }

    // Destroy the mutex
    pthread_mutex_destroy(&mutex);

    // Print the final value of mails
    printf("Number of mails: %d\n", mail);
    return 0;
}

