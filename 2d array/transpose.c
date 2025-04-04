#include<stdio.h>

int main(){

	int a[3][4],i,j;

	printf("Enter 3*4 matrix");

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("transpose \n");

	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("  %d  ",a[j][i]);
	}
	printf("\n");
	} 

	return 0;
}
