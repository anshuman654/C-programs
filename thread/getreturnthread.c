#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<time.h>

void* roll dice(){
int value =(rand()%6)+1;
int* result =malloc(sizeof(int));
printf("%d\n",value);
return (void*)&value;
}
int main (int argc, char argv[]){
	int* res;
srand(time(NULL));	
pthread_t th;
if(pthread_create(&th,NULL,&roll_dice,NULL)!=0){
rerurn 1;
}
if(pthread_join(th,(void**)&res)!=0){
rerurn 2;
}
printf("result:%d\n",*res);
free(res);
return 0;
}
