#include<stdio.h>
#include<string.h>

	
char longestcmmngprefix(char* str[],int n, char* result){

	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(str[i]>str[j]){
				int temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	
	}
	
	findcmmnnprefix(str[0],str[n-1],result){
	
	
	
	}
}
char findcmmnnprefix(char* str,char* strr,char* prefix){
	int i=0;
	while(str[i]!='\0' && strr[i]!='\0' && str[i]==strr[i]){
		
		prefix[i]=str[i];
		i++;
	
	}
	prefix[i]='\0';

}


int main(){
	
	char* str[]={"flower", "flow", "flight"};
	char n=sizeof(str)/sizeof(str[0]);
	char result[100];

	longestcmmnprefix(str,n,result);




	return 0;
}
