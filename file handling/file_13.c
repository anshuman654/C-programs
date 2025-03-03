#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void){
FILE* fptr1;
FILE* fptr2;
char ch;
fptr1=fopen("test.txt","r");
	if(fptr1==NULL){
		printf("error in opening1");
		return 1;
	}
fptr2=fopen("temp.txt","w");
	if(fptr2==NULL){
	        printf("error in opening 2");
		return 1;
	}
while(1)
{
ch=fgetc(fptr1);
if(ch==EOF){
break;
}
else{
ch=ch+100;
fputc(ch,fptr2);
}
}
fclose(fptr1);
fclose(fptr2);
fptr1=fopen("test.txt","w");
 if(fptr1==NULL){
                printf("error in opening1");
                return 1;
        }

fptr2=fopen("temp.txt","r");
if(fptr2==NULL){
                printf("error in opening 2");
        }
while(1)
{
ch=fgetc(fptr2);
if(ch==NULL){
break;
}
else{
      fputc(ch,fptr1);	
}
}
fclose(fptr1);
fclose(fptr2);
return 0;
}
