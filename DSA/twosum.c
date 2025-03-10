#include<stdio.h>
#include<stdlib.h>

int twosum(int arr[],int target,int n)
{
	int i,j;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				printf("these are two index %d %d",i,j);
				return 0;
			}
			
		}		
	}
	printf("these array of sum dont contain the target value");
}

int main()
{
	int arr[50],n,target;

	printf("enter the target value");
		scanf("%d",&target);

	printf("enter the total number in array");
		scanf("%d",&n);

	printf("enter the elements of the array");
		
	for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}	
	int final = twosum(arr,target,n);


	return 0;
}
