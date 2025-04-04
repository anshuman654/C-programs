#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void count_file_contents(const char *filename);

int main(){

	char filename[100];
	printf("Enter the file name");
	scanf("%s",filename);

	count_file_contents(filename);
	
	return 0;
}

void count_file_contents(const char *filename){

	FILE *ft;

	int character=0,line=0,word=0,in_word=0;

	char ch;
	


	ft=fopen(filename,"r");

	while((ch=fgetc(ft))!=EOF){
		character++;
		
		if(ch == '\n'){
			line++;
		}
		
		  if (ch == ' ' || ch == '\n' || ch == '\t') {
           			 in_word = 0; // We are not in a word
       		} else {
          		  if (in_word == 0) {
               			 word++; // We found a new word
               				 in_word = 1; 

		}
		
	
	}



	}
	printf("character:%d line:%d word:%d",character,line,word);

}
