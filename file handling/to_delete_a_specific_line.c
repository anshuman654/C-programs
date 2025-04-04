#include<stdio.h>


int main(){

	FILE *original,*copy;

	char ch;
	int n,line ;

	original=fopen("file1","r");

	if(original==NULL){
	
		printf("file is not getting open");
		return 1;
	}

	while((ch=fgetc(original))!=EOF){
	
		printf("%c",ch);
	}

	rewind(original);

	printf("which line you want to delete ");
	scanf("%d",&n);

	copy=fopen("new","w");

	 while((ch=fgetc(orginal))!=EOF){

                if(ch=='\n'){

                        line++;
                }
                if(line!=n){

                        fputc(ch,copy);

                }

        }

	 fclose(original);
	 fclose(close);

	 remove(file1);

	 rename("new","file1");

	 original=fopen("file1","r");
	
	 ch=fgetc(original);
	 while(ch!=EOF){
	 
		 printf("%c",ch);
		 ch=fgetc(original);
	 }

	 fclose(original);
	 return 0;


	return 0;
}
