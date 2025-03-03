#include<stdio.h>
#include<limits.h>
int minSwaps(int arr[],int n,int k){
	int window_size=0;
	int min_swaps=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<=k){
			window_size++;
		}	
		}
	for(int i=0;i<=n-window_size;i++){
		int number_swaps=0;
	for(int j=i;j<window_size;j++){
		
		if(arr[j]>k){
			number_swaps++;
	}
	}
	
	if(min_swaps>number_swaps){
		min_swaps=number_swaps;
	}
	}

	return min_swaps;
}
int main(){
int arr[100]={2,1,5,6,3,4,7};
int n=sizeof(arr)/sizeof (arr[0]);
int k=4;
int swaps=minSwaps(arr,n,k);
printf("%d",swaps);
return 0;
}



