#include<stdio.h>
#include<string.h>


int main(){

	FILE *ft=fopen("file1","r");
	
	if(ft==NULL){
	
		printf("file is not getting open");
		return 1;
	
	}

	char ch;

	int count=0;

	while((ch=fgetc(ft))!=EOF){
		
		putchar(ch);
			
		if(ch=='\n'){
		
			count++;
		
		}
	}
	

	fclose(ft);
	printf("Total number of lines %d",count);



	return 0;
}
