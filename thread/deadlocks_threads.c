#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

#define THREAD_NUM 8
 pthread_mutex_t mutexFuel;
 int Fuel=50;
 pthread_mutex_t mutexwater;
 int water=10;

 void* routine(void* args){
	pthread_mutex_lock(&mutexFuel);
	pthread_mutex_lock(&mutexwater);

 	Fuel+=50;
	water=fuel;
	printf("increamented fuel to: %d set water to %d\n",Fuel,water);
	pthread_mutex_unlock(&mutexFuel);
	pthread_mutex_unlock(&mutexwater);

 }

int main(int argc,int *argc[]){
	pthread_t th[THREAD_NUM];
        pthread_mutex_init(&mutexFuel,NULL);
	pthread_mutex_init(&mutexwater,NULL);

	int i;
	for(i=0;i< THREAD_NUM;i++){
	    	if(pthread_create(&th[i],NULL,&routine,NULL)!=0){
	    		perror("Failed to create thread");
	    }
	}
	 for(i=0;i< THREAD_NUM;i++){
            if(pthread_join(th[i],NULL)!=0){
            perror("Failed to join thread");
            }
        }
	printf("Fuel:%d\n,Fuel";)
	printf("Water:%d\n,water";)

	pthread_mutex_destroy(&mutexFuel);
	 pthread_mutex_destroy(&mutexwater);
        return 0;
}
