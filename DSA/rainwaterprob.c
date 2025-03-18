#include<stdio.h>
#include<stdlib.h>


int Final(int arr[],int n);

int main(){

	int arr[]={3,1,2,4,0,1,3,2};
	int n =sizeof(arr)/sizeof(arr[0]);

	int result=Final(arr,n);

	printf("total rain water collected:: %d",result);

	return 0;
}

int Final(int arr[],int n){


	int left[n],right[n],max=0,index=0,indexx=n-1,sum=0,water;

	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
			left[index++]=max;
		}
		else{
			left[index++]=max;
		}
	}
	max=0;	
	for(int i=n-1;i>=0;i--){
		if(max<arr[i]){
			max=arr[i];
			right[indexx--]=max;
		}
		else{
			right[indexx--]=max;
		}
	}
	for(int i=0;i<n;i++){
		int min =(left[i] < right[i]) ? left[i] : right[i];
		water=min-arr[i];
		sum=sum+water;
	}
	return sum;

}










