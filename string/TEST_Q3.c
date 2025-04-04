#include<stdio.h>
#include<string.h>

void reverse(char str[]);

int main(){

	char str[100];

	printf("enter the string\n");
	scanf("%s",str);

	reverse(str);

	printf("reversing string\n");
	
	printf("%s",str);
	
	

	return 0;
}

void reverse(char str[]){
	
	int n =strlen(str);
	char temp;

	for(int i =0;i<n/2;i++){
		
		temp=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=temp;
	}
}
