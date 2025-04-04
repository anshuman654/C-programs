#include<stdio.h>
#include<string.h>


#define FILE_SIZE 1000
#define SIZE 1000

int main(){

	char filename[FILE_SIZE];
	char buff[SIZE];

	int n;

	FILE *ft;

	printf("Enter the FILE:");
	scanf("%s",filename);

	ft=fopen(filename,"r");

	if(ft==NULL){
	
		printf("file is not opening");
		return 1;
	
	}

	printf("enter the how many lines you want to enter");
	scanf("%d",&n);

	getchar();

	for(int i;i<n;i++){

	printf("Enter the new line you want to entered");
	fgets(buff,SIZE,stdin);
	fputs(buff,ft);

	}
	
	
	fclose(ft);

	return 0;
}
