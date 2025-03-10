#include<stdio.h>


int search(int arr[],int n,int target){

	int low=0,high=n-1,mid=0,i;
	while(low<=high){
		mid=(low+high)/2;

			if(arr[mid]==target){
					return mid;
		}
			if(arr[low]<=arr[mid]){
				if(arr[low]<target && arr[mid]>target){
					for(i=low;i<=mid;i++){
						if(arr[i]==target){
							return i;
						}
					}
				}
				low=mid+1;
			}
			else if (arr[mid]<target && arr[high]>target){
					for(i=mid;i<high;i++){
						if(arr[i]==target){
							return i;
						}
					}
			}
	}


}

int main(){
	
	int arr[]={4,5,1,2,3};
	int n =sizeof(arr)/sizeof(arr[0]);
	int target=1;

	printf("enter the target value");
	scanf("%d",&target);

	int result=search(arr,n,target);

return 0; 
}
