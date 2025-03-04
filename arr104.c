#include<stdio.h>

void rearrangingarray(int arr[],int n){
for(int i=0;i<n-1;i++){
	if(i%2==0){
		if(arr[i]>arr[i+1]){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		}
	}
	else{
	if(arr[i]<arr[i+1]){
		int temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	
	}
	}
	
}
}
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}		
}	
int main(){
int arr[100]={4,8,4,7,2,0,5};
int n =sizeof(arr)/sizeof(arr[0]);
printf("orginal array \n");
display(arr,n);
printf("rearranged array \n");
rearrangingarray(arr,n);
display(arr,n);
}
