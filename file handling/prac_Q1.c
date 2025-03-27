#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	FILE *ft;

	char ch;

	ft=fopen("file1","r");

	if(ft==NULL){
	
		printf("file can't be opened");
		return EXIT_FAILURE;
	}

	while((ch=fgetc(ft))!=EOF){
		
		printf("%c",ch);
	
	}

	fclose(ft);



	return 0;
}
