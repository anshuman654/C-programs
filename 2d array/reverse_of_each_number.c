#include<stdio.h>

int main(){

	int a[3][3],i,j,t,n,s;

	printf("\nEnter the elements");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	 for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        n=a[i][j];
			s=0;
			while(n>0){
				t=n%10;
				s=s*10+t;
				n=n/10;
			}
			printf("reverse is = %d",s);
                }
        }

	return 0;
}
