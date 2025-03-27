#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

	FILE *f1,*f2;
	
	char buff[100];

	f1=fopen("file1","a+");
	f2=fopen("file2","a+");

	fprintf("f2","\n");
	

	while(fgets(buff,sizeof(buff),f1)!=NULL){
		fprintf(f2,"%s",buff);
	}

	rewind(f2);

	while((fgets(buff,sizeof(buff),f2)!=NULL)){
		printf("%s",buff);
	
	}


	return 0;
}
