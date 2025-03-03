#include<stdio.h>
#include<string.h>
int main(void){
FILE* fptr1;
FILE* fptr2;
FILE* fptr3;
char ch;
char sh;
fptr1=fopen("t.txt","r");
if(fptr1==NULL){
		printf("Error in opening file1\n");	
		return 1;
		}
fptr2=fopen("test.txt","r");
if(fptr2==NULL){	
		printf("error in opening file2\n");
		return 1;
}
fptr3=fopen("temp.txt","w");
if(fptr3==NULL){
		printf("error in opening file3\n");
		return 1;
}
fprintf(fptr3,"this is the result of merging two file\n");
fclose(fptr3);
fptr3=fopen("temp.txt","a");
while((ch=fgetc(fptr1))!=EOF){
               //fputc(ch,fptr3);
	       fprintf(fptr3,"%c",ch);
}
while((sh=fgetc(fptr2))!=EOF){
		fputc(sh,fptr3);
}
fclose(fptr1);
fclose(fptr2);
fclose(fptr3);
return 0;
}

