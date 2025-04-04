#include<stdio.h>

int main(){

	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf("Enter the value of 1st matrix");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the value of second matrix");

	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&b[i][j]);
                }
        }
	printf("\n sum of two matrix \n");
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                       	c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
                }
		printf("\n");
        }
	
	return 0; 
}
