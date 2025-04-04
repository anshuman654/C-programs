#include<stdio.h>

void sortArray(int arr[], int n);

int main(){
	int arr[] = {5, 2, 9, 1, 5};
	int n =sizeof(arr)/sizeof(arr[0]);

	printf("Array after sorting");
	sortArray(arr, n);

	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}

	return 0;
}

void sortArray(int arr[],int n){

	int i,j,temp=0;

	for(i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		
		}
	
	}

}
