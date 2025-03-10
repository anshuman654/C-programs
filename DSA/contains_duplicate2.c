#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int duplicate(int arr[],int n,int k)
{
	int i,j;
	for(i=0; i<n ; i++){
		for( j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				if(i-j<=k){
					return true;
				}
			}
		}
	}
	return false;
}

int main(){

	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=3;
	if(duplicate(arr,n,k)){
	printf("true");
	}
	else{
			printf("false");
		}

	return 0;	
}

