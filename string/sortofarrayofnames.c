#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int compare(const void *a,const void *b){

	return strcmp(*(const char**)a,*(const char **)b);
}

void sortNAmes(char* names[],int count){

	qsort(names,count,size(char*),compare);		
}

int main(){

	char* names[]={
		"Ansh",
		"AKANSHA",
		"pallavi",
		"sunita"	
	};
	int count = sizeof(names) /sizeof(names[0]);

	sortNames(names,count);

	printf("sorted names: \n");

	for(int i=0;i<count;i++){
	
		printf("%s \n",names[i]);
	}

	return 0;
}
