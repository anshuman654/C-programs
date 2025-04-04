#include<stdio.h>
#include<string.h>

#define R 100
#define C 100

int main(){
	
	char line[R][C];
	
	FILE *fp;

	int i=0;
	int tot=0;

	fp=fopen("file1","r");

	while(fgets(line[i],C,fp)){
	
	line[i][strlen(line[i])-1]='\0';

		i++;
	}
	tot=i;

	printf("Total number of lines::%d",tot);
	
	return 0;

}
