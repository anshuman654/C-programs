#include<stdio.h>
#include<string.h>
int main(void){
FILE*fptr;
FILE*fptr2;
char ch[1000];
char sh[1000];
int count=0;
int num;
fptr=fopen("t.txt","r");
fptr2=fopen("temp.txt","w");
printf("which line number you want to remove: ");
scanf("%d",&num);
getchar();
printf("enter the new line: ");
fgets(sh,sizeof(sh),stdin);
while(fgets(ch,sizeof(ch),fptr)){
count++;
if(count==num){
fputs(sh,fptr2);
continue;
}
fputs(ch,fptr2);
}
fclose(fptr);
fclose(fptr2);
fptr2=fopen("temp.txt","r");
while(fgets(ch,sizeof(ch),fptr2)){
printf("%s",ch);
}
}
