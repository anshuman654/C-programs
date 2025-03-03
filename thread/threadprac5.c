#include<pthread.h>
#include<unistd.h>
#include<stdio.h>

void* myturn(void* arg){
int *iptr=(int *)arg;
for(int i=0;i<8;i++){
sleep(1);
printf("My turn: %d argument: %d\n",i,*iptr);
(*iptr)++;
}
}

void yourturn(){
for(int i=0;i<5;i++){
sleep(1);
printf("your turn: %d\n",i);
}
}
int main(){
pthread_t newthread;
int v=5;
pthread_create(&newthread,NULL,myturn,&v);
yourturn();
pthread_join(newthread,NULL);
printf("thread's done:v=%d\n",v);
}
