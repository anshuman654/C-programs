#include<stdio.h>
#include<string.h>
void main(){
	FILE* fptr;
	int count=0;
	char ch;
	//char fname[]="t.txt";
	fptr=fopen("t.txt","r");
	for (ch = getc(fptr); ch != EOF; ch = getc(fptr)){
		if(ch=='\n'){
			count++;
			//printf("%d\n",count);
		}
	}
	printf("%d",count);
	fclose(fptr);
}
