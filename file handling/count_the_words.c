#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int main(){

	FILE *ft=fopen("file1","r");
	
	bool whitespace = true;

	if(ft==NULL){
	
		printf("file is not getting open");
		return 1;
	
	}

	char ch;

	int count=0,character=0,word=0;

	while((ch=fgetc(ft))!=EOF){
			
		character++;

		putchar(ch);
			
		if(ch==' '|| ch=='\n'|| ch=='\t'){
		
			whitespace=false;
		}
		else if(!whitespace){
		
			whitespace=true;
			word++;
		
		}
	}
	

	fclose(ft);
	printf("Total number of character %d",character);
	printf("Total number of word %d",word);


	return 0;
}
