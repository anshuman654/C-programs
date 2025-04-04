#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LENGHT 256

void mergefiles(){

	FILE *f1,*f2,*f3;

	f1=fopen("file1","r");
	f2=fopen("file2","r");
	f3=fopen("out","w");

	if(f1==NULL||f2==NULL||f3==NULL){
	
		printf("file not getting opened");
		 exit(EXIT_FAILURE) ;
	
	}

	char line1[MAX_LENGHT];
	char line2[MAX_LENGHT];

	int read1,read2;
	
	while(1){
	
	char *read1=fgets(line1,sizeof(line1),f1);
	char *read2=fgets(line2,sizeof(line2),f2);

	if(read1){

		fputs(line1,f3);

	}
	if(read2){
	
		fputs(line2,f3);
	
	}
	if(!read1 && !read2){
		
		break;
	
	}

	}

	fclose(f1);
	fclose(f2);
	fclose(f3);
}
int main(){

	mergefiles();
	printf("the files are merged succesfully");
	return EXIT_SUCCESS;

	return 0;
}
