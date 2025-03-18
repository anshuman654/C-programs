#include<stdio.h>
#include<stdlib.h>

int find(int arr[],int n,int target);


int main(){

	int arr[]={5,7,7,8,8,8,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=8;
	int result=find(arr,n,target);



	return 0;
}

int find(int arr[],int n,int target){

	int start=0,last=n-1,first=0,end=0;

	int mid=start+last/2;
	
	while(start<=last){
	if(target==arr[mid]){
	
		while(arr[mid]==arr[mid-1]){
			mid--;
		}
		first=mid;

		while(arr[mid]==arr[mid+1]){
			mid++;
		}
		end=mid;	
	printf("%d",first);
	printf("%d",end);
	break;
	
	}

	if(target<arr[mid]){
		
	last=mid-1;
	}
	if(target>arr[mid]){
	start=mid+1;
	}
	}

}
