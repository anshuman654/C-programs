#include<stdio.h>
#include<pthread.h>

void* my_turn(void* arg) {
    printf("my  turn\n");
    return NULL;
}

int main() {
    pthread_t thread;

    if(pthread_create(&thread, NULL, my_turn, NULL) != 0) {
        perror("thread creation failed");
        return 1;
    }

    if(pthread_join(thread, NULL) != 0) {
        perror("thread join failed");
        return 1;
    }

    return 0;
}

