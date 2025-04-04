#include<stdio.h>


int find_largest(int arr[], int n);

int main(){

	int arr[]={1,3,6,8,9,4,5,6};
	int n =sizeof(arr)/sizeof(arr[0]);

	int result=find_largest(arr,n);


	return 0;
}

int find_largest(int arr[],int n){


	int i,j,count=0;

	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]==arr[j+1]){
				count++;
			}
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			
			}
		}
	
	}

	printf("The second largest element is %d",arr[n-2]);

	if(count<2){
		return -1;
	}

}
