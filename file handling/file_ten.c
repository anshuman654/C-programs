#include<stdio.h>
#include<string.h>
int main(void){
FILE* fptr;
char ch[100];
int num,i;
fptr=fopen("t.txt","a");
fseek(fptr,0,SEEK_END);
printf("how many new lines you want enter");
scanf("%d",&num);
getchar();
for(i=0;i<num;i++){
printf("enter the new lines");
fgets(ch,sizeof(ch),stdin);
fputs(ch,fptr);
}
}

