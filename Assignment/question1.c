#include<stdio.h>
 int main(){
 int n,i,target,j,check=0;
 int arr[100];	
 
 printf("enter the numbers of array");
 scanf("%d",&n);
 
 printf("enter the elements in the array");
 for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 
 printf("enter the closest target");
 scanf("%d",&target);

 for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 check=arr[i]-arr[j];
 if(check==target){
 printf("%d %d",arr[i],arr[j]);
 return 0;
 }
 }
 }
 }
