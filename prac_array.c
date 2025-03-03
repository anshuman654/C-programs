#include<stdio.h>

int main()
{
     int a[]={1,2,3,4,5,6,11,8};
    int larg=a[0];
    int secondlarg=-1;
   
    for(int i=0;i<8;i++){
        if(larg<a[i]){
          //  secondlarg=larg;
            larg=a[i];
        }
              else if (a[i]>secondlarg && a[i]!=larg){ 
             secondlarg=a[i];
              }
            }
        
          printf("%d",secondlarg);
    }

