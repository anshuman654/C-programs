#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *ft;
	
	ft=fopen("file1","r");
	
	if(ft==NULL){
	
		printf("File not opening");
		return 0;
	
	}
		
	fseek(ft,0L,SEEK_END);

	long int result=ftell(ft);

	fclose(ft);

	printf("File size: %ld bytes\n", result);

	return 0;
}
