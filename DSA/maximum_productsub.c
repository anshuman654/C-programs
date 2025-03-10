#include<stdio.h>
#include<limits.h>

int MaxSubProduct(int arr[],int n)
{
	int max1=INT_MIN;
	int max2=INT_MIN;
	int prefix=1;
	int suffix=1;

	for(int i=0;i<n;i++){
		prefix=prefix*arr[i];
			if(prefix==0){
				prefix=1;
			}
			if(prefix>max1){
				max1=prefix;
		}
	}

	for(int i=n-1;i>=0;i--){
                suffix=suffix*arr[i];
			if(suffix==0){
				suffix=1;
			}
               		 if(suffix>max2){
                        	max2=suffix;
                }
        }

	if(max1>max2){
		return max1;
	}
	else
	{
		return max2;
	}


}

int main()
{
	int arr[]={2,3,-2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
		
	int result=MaxSubProduct(arr,n);
	
	printf("Result: %d",result);
			

	return 0;
}
