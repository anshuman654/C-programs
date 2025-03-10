#include<stdio.h>
#include<stdlib.h>

int profit(int arr[],int n)
{
	int buy=arr[0],sell=0,i,j,profit;

		for(i=0;i<n;i++){
			 	if(buy>arr[i]){
					buy=arr[i];
				}
				if(sell<arr[i+1]){
					sell=arr[i];
				}
				}
					profit=sell-buy;

			return profit;
}

int main(){
	int arr[50],n;

	printf("how many elements you want in your array");
		scanf("%d",&n);

		printf("enter the elements in the array");

			for(int i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
		
			int totalprofit=profit(arr,n);		
				printf("enter the total profit: %d",totalprofit);
	
	return 0;
}
