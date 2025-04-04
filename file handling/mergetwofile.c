#include<stdio.h>
#include<stdbool.h>

#define MAX 1000

int main(){

	char fileone[MAX];
	char filetwo[MAX];
	char filethree[MAX];

	char buff[MAX];

	FILE *f1,*f2,*f3;

	printf("Enter the file name");
	scanf("%s",filename);

	printf("Enter the second file name");
	scanf("%s",filetwo);

	printf("Enter the third file name");
	scanf("%s",filethree);

	f1=fopen(fileone,"r");
	f2=fopen(filetwo,"r");
	f3=fopen(filethree,"r+");

	bool key=true;

	while(key){
	
	if(feof(f1)) key= false;

	fgets(buff,MAX,f1);
	fputs(buff,f3);
	
	}

	while(key){

        if(feof(f2)) key= false;

        fgets(buff,MAX,f2);
        fputs(buff,f3);

        }

	fclose(f1);
	fclose(f2);
	fclose(f3);

	return 0;
}
