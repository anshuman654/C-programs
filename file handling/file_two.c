#include<stdio.h>
#include<string.h>
void main(){
char str;
FILE* fptr;
char fname[20];
scanf("%c",fname);
fptr=fopen(fname,"r");
if (fptr==NULL){
printf("probelm in opening the file");
}
str=fgetc(fptr);
while(str!=EOF){
printf("%c",str);
str=fgetc(fptr);
}
fclose(fptr);
}
