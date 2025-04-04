#include<stdio.h>

int main(){

	int a[3][3],i,j,s1=0,s2=0;

	printf("enter the 3*3 matirx");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&a[i][j]); 
			}
		}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				s1+=a[i][j];
			}
			if(i+j==2){
				s2+=a[i][j];
			}
			}
		}
	

	printf("%d %d",s1,s2);


	return 0;
}
