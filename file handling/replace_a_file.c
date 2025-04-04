#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2084


int main(){

	//file pointer
        FILE *file,*temp;
	//character array
        char filename[FILENAME_SIZE];
	char temp_filename[FILENAME_SIZE];
	
	char buffer[MAX_LINE];
	char replace [MAX_LINE];
	
	int replace_line=0;

	printf("FILE: ");
	scanf("%s",filename);
	
	strcpy(temp_filename,"temp__");
	strcat(temp_filename,filename);

        printf("which line you want to replace ");
        scanf("%d",&replace_line);
	//just to remove new line character
	fflush(stdin);

	printf("what you want to write in place of that");
	fgets(replace,MAX_line,stdin);

	file=fopen(filename,"r");
	temp=fopen(temp_filename,"w");

	if(file==NULL || temp=NULL){
		printf("not opening");
		return 1;
	}
	//to keep a track thats why we creating it
	bool keep_reading=true;
	int current_line=1;
	//loop to enter the content	
	do{
		
	fgets(buffer,MAX_LINE,file);
	//when we reach at the end of the file we have to come out of loop
	if(feof(file)) keep_reading = false;

	else if(current_line==replace_line)
		fputs(replace,temp);
	else fputs(buffer,temp);

	current line++;

	}while(keep_reading);


	fclose(file);
	fclose(tmep);

	remove(filename);

	rename(temp_filename,filename);

	return 0;

}
