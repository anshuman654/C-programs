#include<stdio.h>
#include<pthread.h>

//function to be executed
void* print_message(void* arg){
//extract the integer argument passed to the thread
int number =*((int*)arg);
printf("the number being received in the thread: %d\n",number);
return NULL;
}


int main(){
	//array to hold thread ids
pthread_t threads[5];
        //array to hold the numbers passed in the thread
int number[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
	// Pass the address of number[i] as argument
if(pthread_create(&threads[i],NULL,print_message,(void*)&number[i])!=0){
printf("thread creating failed");
return 1;
}
}
for(int i=0;i<5;i++){
if(pthread_join(threads[i],NULL)){
printf("thread joining are failed");
return 1;
}
}
return 0;
}

