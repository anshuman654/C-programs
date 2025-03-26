#include<stdio.h>
#include<string.h>

int main(){

	char str1="Anshuman";
	char str2="Arora";
	
	int result=swap(str1,str2);

	printf("str1 is %s, str2 is %s", str1, str2); 
	getchar(); 


	return 0;
}

swap(char str1,char str2){

	char temp;

	temp=str1;
	str1=str2;
	str2=str1;

}
