#include<stdio.h>
#include<stdlib.h>

int MaxArea(int arr[],int n);

int main(){

	int arr[]={1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n=sizeof(arr)/sizeof(arr[0]);

	int result=MaxArea(arr,n);
	
	printf("MAX Area::%d",result);
	
	return 0;
}

int MaxArea(int arr[],int n){

	int left=0,right=n-1,area=0,max_area=0;

	while(left<right){
		
	int min_height = arr[left] < arr[right] ? arr[left] : arr[right];
		
	int weight= right-left;

	area=weight*min_height;

	if(area>max_area){
		
		max_area=area;
	
	}

	if(arr[left]<arr[right]){
	
		left++;
	}
	else{
		right--;
	
	}
	
	}

	return max_area;
}

