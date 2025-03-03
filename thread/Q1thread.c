#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void*routine(){
printf("test from threads \n");
}

int main(int argc,char* argv[]){
pthread_t t1; 
pthread_create(&t1,NULL,&routine,NULL);
pthread_create(&t1,NULL,&routine,NULL);

pthread_join(t1,NULL);
pthread_join(t1,NULL);
return 0;
}
