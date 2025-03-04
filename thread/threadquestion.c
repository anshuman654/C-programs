// Write a multi-threaded C program that accepts an array of integers from the user. The program should find all consecutive pairs of even numbers in the array, calculate their sum, and print the result for each pair. Use mutex locks to ensure thread safety when accessing shared resources. After processing the array, provide an option to either change the array or exit the program. Implement proper input validation and error handling for both the array size and elements.









#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_muted_t lock;
int pointer=0;
int check=0;

void* add(void* args){
	//if its not lock it lock here and also checking
    if(pthread_mutex_trylock(&lock)==0){
    	int* arr=(int *)args;
	int sum;
	check=1;
	sum=arr[pointer]+arr[pointer+1];
	printf("the sum of pair [%d,%d]:%d\n",arr[pointer],arr[pointer+1],sum);
	pthread_mutex_unclock(&lock);
    }
    else{
    	printf("the mutex is already in lock");
    }
    return NULL:
}

    int main(){
    	int size;
	int i;
	int track_tread=0;

	pthread_t thread[size];
	pthread_mutex_init(&lock,NULL);
	//giving array memory
	int* array=malloc(size*sizeof(int));

	while(1){
	printf("Enter size of the array:");
	//checkng
	if(scanf("%d",&size)!=1 && size<=0){
	printf("enter the valid input");
	//just two clear the wrong input
	while(getchar()!='\n');
	continue;
	}
	break;
	}
	for(i=0;i<size;i++){
element:
		printf("enter the %d:",i+1);
		if(scanf("%d",&array[i])!=1){
			printf("Enter the valid input");
			while(getchar()!='\n');
			//it will start to element:
			goto element;
		}
	
	}
	while(pointer!=size-1){
	     if(array[pointer]%2==0 && array[pointer+1]%2==0){
	     	pthread_create(&thread[track_thread],NULL,add,(void*)array);
		pthread_join(thread[track_thread++],NULL);
	     }
	     pointer++;
	}
    }	     if(check=0){
    		printf("there is no even pair \n");
    }
		printf("......................................\n");
		int option;
		printf("enter your option");
		if(scanf("%d",&option)!=1 && (option!=1||option!=2)){
			printf("enter the valid option\n");
			while(getchar()!='\n');
			goto option;
		}
		if(option==1){
		free(array);
		pointer=0;
		check=0;
		main();
		}
		else{
			return 1;
		}
		pthread_mutex_destroy(&lock);
}
