#include<stdio.h>

int main(){

	int arr[3][3],i,j,n,f;
	
	printf("Enter the elements");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			n=a[i][j];
			k=1;
			for(k=1;k<n;k++){
				f=f*k;
			}
			printf("\n Factoriall = %d",f);
		}
	}

	return 0;
}
