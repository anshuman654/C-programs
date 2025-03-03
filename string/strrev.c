#include<stdio.h>
int main(){
int lenght=0;
char s1[30];
char temp;
lenght=strlen(s1);
for(i=0;i<l/2;i++){
temp=s1[i]
s1[i]=s1[lenght-1-i];
s1[lenght-1-i]=temp;
}
printf("%s",s1);
}
