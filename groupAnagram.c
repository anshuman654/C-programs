#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_WORDS 100
#define MAX_lenght 100

typedef struct AnagramGroup{
	char **words;
	int count;
} AnagramGroup;

void sortString(char *str){

	int n =strlen(str);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(str[i]>str[j]){
				char temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			
}
}
}
}

void groupAnagrams(char *words[],int n){
	anagramGroup *groups = malloc(n* sizeof(AnagramGroup));
	int groupCount = 0;
	
	for(int i=0;i<n;i++){
		char sorted[MAX_LENGHT];
		strcpy(sorted,words[i]);
		sortString(sortrd);

		int found = 0;
		for(int j=0; j<groupCount; j++){
			groups[j].words[group[j].count]=words[i];
			groups[j].count++;
			found=1;
			break;
		}
	}
		if(!found){
			groups[groupCount].words=malloc(n * sizeof(char *));
			groups[]
		
		}


}
