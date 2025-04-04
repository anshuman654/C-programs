#include<stdio.h>

struct book{
	
	char title[100];
	char author[100];
	int year;

};

void writeBooksToFile(struct book A[],int n);


int main(){
	
	struct book A[100];
	int n,i;

	printf("how many books you want");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter the details \n");

		printf("Enter the title \n");
		scanf("%s",A[i].title);
		
		printf("Enter the author");
		scanf("%s",A[i].author);

		printf("Enter the year");
		scanf("%d",&A[i].year);
	}

	writeBooksToFile(A,n);

	


	return 0;
}

void writeBooksToFile(struct book A[],int n){

	FILE *ft;

	ft=fopen("data.txt","w");

	for(int i=0;i<n;i++){
	
		fprintf(ft,"%s %s %d",A[i].title,A[i].author,A[i].year);
	
	}


}
