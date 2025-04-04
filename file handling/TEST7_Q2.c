//Write a C program that reads a text file containing a list of names (one name per line) and counts how many names start with each letter of the alphabet (A-Z). The program should then write the results to a new file named "name_counts.txt". Handle any potential file errors appropriately, and ensure that the program can handle varying numbers of names.

#include<stdio.h>
#include<ctype.h>

int main(){

	FILE *ft;

	ft=fopen("data.txt","r");

	char buff[100];
	char new[26]={0};

	int t,n=5;

	if(ft==NULL){
		printf("file is not getting open");
	}

	while( t<=n && (fscanf(ft,"%s",buff))==1){
	
		char m= tolower(buff[0]);

		if(m>=a && m<=z ){
			
		 new[m-'a']++;
			
		}
		t++;
	
	}

	for(int i=0;i<n;i++){
		
		printf("%d   %d",new[i],i);
	
	}


	return 0;
}
