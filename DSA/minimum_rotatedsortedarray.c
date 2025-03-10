#include<stdio.h>
#include<limits.h>

int result_min(int a[],int n)

{
	int low=0,high=n-1,ans=INT_MAX;

	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[low]<=a[mid]){
			if(a[low]<ans){
				ans=a[low];
			}
			low=mid+1;
		}
		else{
			ans=a[mid];
			high=mid-1;
		}
	}
	return ans;

}

int main(){

	int a[]={4,5,1,2,3};
	int n=sizeof(a)/sizeof (a[0]);

	int result=result_min(a,n);

	printf("%d",result);
	return 0;
}
