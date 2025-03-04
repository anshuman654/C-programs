//Question: Write a C program that accepts a list of integers and computes the sum of the squares of all odd numbers in the array using multiple threads. The program should use a mutex lock to prevent concurrent modification of the shared sum. After calculating the sum, the program should display the result. It should also provide the user with the option to either change the array or exit.


#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

//mutex lock for synchronizing access to share resourse
pthread_mutex_t lock;
int sum_of_squares=0;

//function to calculate sqaure of an odd number
void* calculate_sqaure(void* arg){
	int num=*((int *)arg);//deference to get the value of the number
	int sqaure=num*num;

	//lock mutex to safety update the shared vareiable 
	pthread_mutex_lock(&lock);
	sum_of_sqaures+= sqaure;
	pthread_mutex_unlock(&lock);

	return NULL;
}

	int main(){
		int size,i;
		pthread_t* threads;// array to hold threads

		pthread_mutex_init(&lock,NULL);//initializing mutex
		
		while(1){
		printf("enter the size off the array");
		if(scanf("%d",&size)!=1||size<=0){
			printf("please enter the valid input");
			while(getchar()!='\n');
			continue;
		}
		
		}
		//allocate memory for the array and threads
		int* array=(int*)malloc(sizeof(int));
		threads=(*pthread_t)malloc(sizeof(int));
		//input the elements of the array
		for(i=0;i<size;i++){
element:
			printf("Enter the %d:",i+1);
			if(scanf("%d",array[i])!=1){
			   printf("enter the valid input \n");
			   while(getchar()!='\n');
			   goto element;
			}
		
		}
		sum_of_sqaure=0;

		for(i=0;i<size;i++){
		if(array[i]%2!=0)
		pthread_create(&thread[i],NULL,calcute_sqaure,(void*)&array[i]);
		}

		  for(i=0;i<size;i++){
                if(array[i]%2!=0)
                pthread_join(thread[i],NULL);
                }

		printf("the sum of sqaures %d",sum_of_sqaures);

		int option;

		printf("1. change array\n2. Exit\n");
		printf("Enter your option:");
		if(scanf("%d",&option)!=1||(option!=1 && option!=2)){
			printf("invalid option. please choose1 or 2");
			while(getchar()!='\n');
			continue;
		}
		if(option==2 ){
		break;
		}
		//free the allocated memory before starting again 
		free(array);
		free(threads);
	}
		pthread_mutex_destroy(&lock);

		return 0;

		}
