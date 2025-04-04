#include<stdio.h>

int main(){

	int a[3][3],b[3][3],t,i,j;
	
	printf("Enter the 1st matrix");

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the 2nd matrix");

	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&b[i][j]);
                }
        }

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//t=a[i][j];
			//a[i][j]=b[i][j];
			//b[i][j]=t;

		}
	}
	
	printf("Elements of first matrix \n");

	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t\n",a[i][j]);
                }
        }
	printf("Elements of the 2nd matrix \n");

	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t\n",b[i][j]);
                }
        }


	return 0;
}
