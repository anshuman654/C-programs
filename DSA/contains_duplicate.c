#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int duplicate(int arr[],int n)
{
	int i,j;
	for(i=0; i<n ; i++){
		for( j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				return true;
			}
		}
	}
	return false;
}

int main(){

	int arr[]={1,2,3,4,5,6,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(duplicate(arr,n)){
	printf("true");
	}
		else{
			printf("false");
		}

	return 0;	
}
