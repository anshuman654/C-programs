#include<stdio.h>
#include <limits.h>  

int subarr(int arr[],int n ){
	int sum=0,max=INT_MIN;

	for(i=0;i<n;i++){
		sum=sum+arr[i];
		
		if(sum>maxi){
			maxi=sum;
		}
		if(sum<0){
			sum=0;
		}
	}	
}

int main(){
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("sum of sub array");
	int result=subarr(arr,n);
	printf("%d",result);
	return 0;	
}
