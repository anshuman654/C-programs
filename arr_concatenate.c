#include<stdio.h>

#define N 5

int main(){
int a[N],b[N],c[N*2],i,index=0;

printf("enter the integer numbers for first arra\n",N)
	for(i=0;i<N;i++){
	scanf("%d",&a[i]);
	}
for(i=0;i<N;i++){
        scanf("%d",&b[i]);
        }
printf("\n merging a[%d] and b[%] to form c[%d]. .\n",N,N,N*3);
for(i=0;i<N;i++)
{
        c[index++]=a[i];
}
for(i=0;i<N;i++)
{
     c[index++]=b[i];
}

printf("\n Elements of array c[%d] are\n",N*2);
for(i=0;i<N*2;i++)
{
           printf("%d",c[i]);
}

return 0;
}
