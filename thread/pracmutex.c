#include<stdio.h>
#include<pthread.h>

pthread_mutex_t mutex;

int counter=0;
void* increament(void* arg){
	for(int i=0;i<5;i++){
pthread_mutex_lock(&mutex);
counter++;
printf("counter:%d\n",counter);
pthread_mutex_unlock(&mutex);
}
}
int main(){
pthread_mutex_init(&mutex,NULL);
pthread_t thread[5];

for(int i=0;i<5;i++){
pthread_create(&thread[i],NULL,increament,NULL);
}
for(int i=0;i<5;i++){
pthread_join(thread[i],NULL);
}
pthread_mutex_destroy(&mutex);
}
