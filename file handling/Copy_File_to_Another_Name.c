#include<stdio.h>
#include<stdbool.h>

#define MAX 100


int main(){

	char filename[MAX];
	char new_file[MAX];

	char buff[MAX];

	FILE *f1,*f2;

	printf("Enter the source file name");
	scanf("%s",&filename);

	printf("Enter the new file name");
        scanf("%s",&new_file);

	f1=fopen(filename,"r");
	f2=fopen(new_file,"w");

	bool key=true;

	while(key){
	
	if(feof(f1)) key=false;

	fgets(buff,MAX,f1);
	fputs(buff,f2);
	
	}

	fclose(f1);
	fclose(f2);




	return 0;
}
