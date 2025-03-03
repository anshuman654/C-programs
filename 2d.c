#include<stdio.h>
int main(){
int a[50][50],b[50][50],c[50][50],i,j,r1,c1,r2,c2,k;
printf("enter the numbers of rows and col");
scanf("%d %d",&r1,&c1);
printf("enter the elements for 1st matrix");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter the numbers rows and col ");
scanf("%d %d",&r2,&c2);
printf("enter the elements for 2nd matrix");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%d",&b[i][j]);
}
}
printf("The elements of 1st matrix");
for(i=0;i<r1;i++){
for(j=0;j<c1;i++){
printf("%d",a[i][j]);
}
}
printf("The elements for the 2nd elements");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
printf("%d",b[i][j]);
}
}
if(c1!=r2){
printf("cannot multiply");
}
else
{
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
for(k=0;k<c1;k++){
c[i][j]+=a[i][k]*b[k][i];
}
}
}
}
for(i=0;i<r1;i++){
for(j=0;j<c2;j++){
printf("%d",c[i][j]);
}
}
}
