#include<stdio.h>
#include<stdlib.h>

int rearrangearray(int arr[],int n){
int index=0;
int temp[10];
int final[10];
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	
	}

	for(int i=0; i<n; i++){
		printf("%d " ,arr[i]);
	}

	printf("\n");
	int idx = 0;
	for(int i=0;i<n;i+=2){
		final[i] = arr[idx++]; 
}
	
	for(int j=n-1; j>=0; j-=2){
		final[j] = arr[idx++];
	}

	for(int i=0;i<n;i++){
	printf("%d ",final[i]);	
	}

}
int main(){
int arr[10]={1,2,3,4,10,9,8,7,6,5};
int n=sizeof(arr)/sizeof(arr[0]);

rearrangearray(arr,n);

return 0;
}
