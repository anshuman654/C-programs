#include<stdio.h>

void bubblesort(int *arr, int n);
void print_array(int *arr, int n);

int main(){

	int arr[]={1,2,2,5,6,1,2};
	int n =sizeof(arr)/sizeof(arr[0]);

	bubblesort(arr,n);
	
	printf("Array after the sorting \n");
	print_array(arr,n);

	return 0;
}

void bubblesort(int *arr,int n){

	int i,j,temp=0;

	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	
	}
}

void print_array(int *arr,int n){

	for(int i=0;i<n;i++){
	
		printf("%d  ",arr[i]);
	
	}
	printf("\n");
}
