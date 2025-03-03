#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[1000];
	FILE *fptr;
	char fname[20]="test.text";

	printf("create a text file)";
        fptr=fopen(fname,"w");
	if(fptr==NULL)
	{
	printf("error in opening a file");
	exit(1);
	}
	printf("input a sentence for the file");
	fgets(str,sizeof str,stdin);
	fprintf(fptr,"%s",str);
	fclose(fptr);
	printf("\n the file %s created nsuccessfully");
	return 0;
	}

	
