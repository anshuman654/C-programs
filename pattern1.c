#include<stdio.h>

int main(){
int n=5;
for(int row=0;row<n-1;row++){
for(int col=0;col<=row;col++){
printf("*");
}
  printf("\n");
}
return 0;
}
