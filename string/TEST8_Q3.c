#include<stdio.h>
#include<string.h>

int countOccurrences(const char* str, const char* subStr);

int main(){

	char str[10]={"abcabcabc"};
	char subStr[4]={"abc"};


	int count=countOccurrences(str,subStr);
	
	printf(" COUNT:%d",count);


	return 0;
}

int countOccurrences(const char* str, const char* subStr){

	int n1=strlen(str);
	int n2=strlen(subStr);
	int count=0;


	for(int i=0;i<=n1-n2;i++){
	
		if((strncmp(&str[i],subStr,3))==0){
			count++;
			//i+=n2-1;
		}
	}
	return count;
}

