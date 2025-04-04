#include<stdio.h>

int main(){

        int a[3][3],i,j,max=-32767,smax=-32768;

        printf("Enter the matrix");

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
			if(a[i][j]>max){
				smax=max;
				max=a[i][j];
			}else{
				if(a[i][j]>smax && a[i][j]!=max){
					smax=a[i][j]; 
				}
			}
                }
        }
	printf("MAX:%d Second MAX:%d",max,smax);

}
