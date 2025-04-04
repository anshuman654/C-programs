#include<stdio.h>

int largest_diff(int arr[],int n );

int main(){

	int arr[100]={1,4,5,6,7,5,3};
	int n =sizeof(arr)/sizeof(arr[0]);

	int result=largest_diff(arr,n);
	
	printf("%d",result);



	return 0;
}

int largest_diff(int arr[],int n ){

	int i,j,max=0;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				if(max<(arr[j]-arr[i])){
					max=arr[j]-arr[i];
				}
			}
		
		}
	
	}
		
	return max;
}
