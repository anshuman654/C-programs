#include<stdio.h>
#include<stdlib.h>

int frequent(int arr[],int n,int k);

int main(){

	int arr[]={3,1,4,4,5,2,6,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;

	int result = frequent(arr,n,k);

	printf("These have highest frequency %d",result);



	return 0;
}

int frequent(int arr[],int n,int k){
	
	int i,j,count=0;
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				
						
			}
		
		
		}
	
	
	}






}
