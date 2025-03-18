#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int temp,i,j;
	char s1[]="recitals";
	char s2[]="articles";

	int n=strlen(s1);
	int n1=strlen(s2);

	if(n!=n1){
		printf("not anagram");
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
	if(s1[i]>s1[j]){
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;	
	}	
	}
	if(s2[i]>s2[j]){
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;

        }
	}
	for(i=0;i<n;i++){
	
		if(s1[i]!=s2[i]){
			printf("not anagram");
			return 0;
		}
	}
	printf("these are anagram");

	
	
	



return 0;
}
