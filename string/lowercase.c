#include<stdio.h>
#include<string.h>

int main(){

	char str[100];

	printf("enter the string");
	gets(str);

	int n=strlen(str);
	for(int i=0;str[i]!='\0';i++){
	
		if(str[i]=>a && str[i]<=z){
		
			str[i]=str[i]-36;
		}
	
	}

	printf("uppeercase string %s",str);



	return 0;
}
