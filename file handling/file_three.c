#include<stdio.h>
void main()
{
FILE*fptr; 
char fname[]="test.txt";
int n,i;
char str[1000];
char str1;
printf("enter the total number of lines you want to enter");
scanf("%d",&n);
 getchar();
fptr=fopen(fname,"w");
for(i=0;i<n;i++){
fgets(str,sizeof(str),stdin);
fputs(str,fptr);
}
fclose(fptr);
fptr=fopen(fname,"r");
str1=fgetc(fptr);
while(str1!=EOF){
printf("%c",str1);
str1=fgetc(fptr);
}
fclose(fptr);
}
