#include<stdio.h>
#include<string.h>

 int count_vowels(const char *str);

int main(){

	char str[100];

	printf("enter a string");
	scanf("%s",str);

	int result=count_vowels(str);

	printf("%d",result);


	return 0;
}

 int count_vowels(const char *str){
 
 	int i;
	int n= strlen(str);
	int count=0;

	for(i=0;i<n;i++){
		
		if(str[i]=='u'||str[i]=='U'){
			count++;
		}
		if(str[i]=='e'||str[i]=='E'){
                        count++;
                }
		if(str[i]=='i'||str[i]=='I'){
                        count++;
                }
		if(str[i]=='o'||str[i]=='O'){
                        count++;
                }
		if(str[i]=='a'||str[i]=='A'){
                        count++;
                }

	}
	return count;
 }
