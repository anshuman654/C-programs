#include<stdio.h>

void productExceptSelf(int arr[],int n){
	int prefix[n], postfix[n], result[n];

	prefix[0]=1 ;
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]*arr[i-1];
	}

	postfix[n-1]=1;
	for(int i=n-2;i>=0;i--){
		postfix[i]=postfix[i+1]*arr[i+1];
	}

	for(int i=0;i<n;i++){
		printf("%d",result[i]);
	}
	printf("n");
}

int main(){
	int arr[]={1,2,3,4};
	int n= sizeof(arr)/sizeof(arr[0]);

	productExceptSelf(arr,n);

	return 0;
}
