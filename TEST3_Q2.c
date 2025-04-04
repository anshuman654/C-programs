#include<stdio.h>

void remove_duplicate(int arr[],int n,int new[]);

int main(){

	int new[100];
	int arr[]={1,2,2,4,5,1};
	int n =sizeof(arr)/sizeof(arr[0]);

	remove_duplicate(arr,n,new);	

	return 0;
}

void remove_duplicate(int arr[],int n,int new[]){
	
	int i,j,index=0;

	for(i=0;i<n;i++){
		int t=0;
		for(j=0;j<n;j++){
			if(arr[i]==new[j]){
				t=1;
			 break;		
			}
			}
			if(!t){
				new[index++]=arr[i];
			}
		}
		
		
	

	 printf("new array");

	for(i=0;i<n;i++){
		printf("%d",new[i]);
	
	}
}

