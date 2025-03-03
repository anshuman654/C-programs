#include<stdio.h>
#include<pthread.h>

#define SIZE 5

int arr[SIZE]={1,2,3,4,5};
int result=0;

void* sum_array(void* arg){
int*sum=(int*)malloc(sizeof(int));
*sum=0;
for(int i=0;i<SIZE;i++){
*sum+=arr[i];
}
pthread_((void*)sum);
}
int main(){
pthread_t t;
int thread_result;
pthread_create(&t,NULL,sum_array,NULL);
pthread_join(t,(void**)&result);
printf("%d\n",*thread_result);
free(thread_result);

return0;
}
