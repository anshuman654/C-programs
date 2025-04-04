#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(){

	char filename[100];

	char name[100];

	char count[26]={0};

	printf("Enter the name of the file");
	scanf("%s",filename);

	FILE *ft=fopen(filename,"r");

	if(ft==NULL){
		printf("file is not getting open");
		return 1;
	}

	while(fgets(name,sizeof(name),ft)){
		char t=tolower(name[0]);

		if(t>='a' && t<='z'){
			count[t-'a']++;
		}
	
	}

	for(int i=0;i<26;i++){
	
		if(count[i]>0){
			
			printf("%c %d",'a'+i,count[i]);
		}
}

	return 0;
}
