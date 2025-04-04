#include<stdio.h>

struct book{

	char title[100];
	char Auther[100];
	int year;
	int price;

};

void after_year(struct book A[],int n);

int main(){

	struct book A[100];
	int n;

	printf("how many books you want to enter");
	scanf("%d",&n);
	
	for(int i =0;i<n;i++){
	
		printf("Enter the information");

		printf("Enter the title");
		scanf("%s",A[i].title);

		printf("Enter the Auther");
		scanf("%s",A[i].Auther);

		printf("Enter the year");
		scanf("%d",&A[i].year);

		printf("Enter the price");
		scanf("%d",&A[i].price);

	}

	after_year(A,n);


	return 0;
}

void after_year(struct book A[],int n){

	int y;

	printf("Enter the year after you want information");
	scanf("%d",&y);

	for(int i=0;i<n;i++){
	
		if(A[i].year>y){
			
			printf("Title::%s Auther::%s Year::%d price::%d",A[i].title,A[i].Auther,A[i].year,A[i].price);
		}
	}
}
