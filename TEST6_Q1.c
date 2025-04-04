#include<stdio.h>

void reverse(int arr[],int start,int end);
void rotate(int arr[],int n , int k);
void printarray(int arr[],int n);


void reverse(int arr[],int start,int end){

	while(start<end){
	
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotate(int arr[],int n , int k){

	k=k%n;

	if(k==0){
		return;
	}

	reverse(arr,0,n-1);

	reverse(arr,0,k-1);

	reverse(arr,k,n-1);

}
void printarray(int arr[],int n){

	for(int i=0;i<n;i++){
	
		printf("%d",arr[i]);
	
	}

}





int main(){

	int arr[]={1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);

	int k=2;

	printf("original array");
	printarray(arr,n);

	rotate(arr,n,k);

	printf("rotated array");
	printarray(arr,n);

	return 0;
}
