#include<stdio.h>
#include<stdlib.h>

int threesum(int* arr, int n);

int main(){

	int arr[]={-1, 2, -1, 3, -2, 2, 1, -2};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	int temp=0,i=0,result=0,j;
	
	for(j=0;j<n-1;j++){
		for(i=0;i<n-j-1;i++){
			if(arr[i]>arr[i+1]){

				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;		
		}
	}
	}

	result=threesum(arr,n);

	return 0;
}

int threesum(int arr[],int n){
	int i,left,right,sum;

	for(i=0;i<n;i++){
	
		if( i>0 && arr[i]==arr[i-1]){
			continue;
		}

		left=i+1;
		right=n-1;

		while(left<right){
		
			sum=arr[i]+arr[left]+arr[right];

			 if(sum==0){

                        printf("%d %d %d\n",arr[left],arr[right],arr[i]);
				
			while(left<right && arr[left]==arr[left+1])left++;
			while(left<right && arr[right]==arr[right-1])right--;

			left++;
			right--;
                        }

			else if(sum<0){
			
				left--;

			}
			else if(sum>0){
			
				right--;
			
			}
			
		
		
		}
	
	}
}


	


