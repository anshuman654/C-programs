#include<stdio.h>

#define MAX 100

struct book{

	char title[MAX];
	char author[MAX];
	float price;
};

float average_price(struct book A[], int n);

int main(){

	struct book A[MAX];
	int n;

	printf("how many books you want to enter \n");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		printf("Enter the Information \n");

		printf("Enter the title \n");
		scanf("%s",A[i].title);

		printf("Enter the Author \n");
		scanf("%s",A[i].author);

		printf("Enter the price \n");
		scanf("%f",&A[i].price);

	}


	float Average=average_price(A,n);

	printf("%f \n",Average);


	return 0;
}

float average_price(struct book A[], int n){

	float ave=0;
 	float sum=0;

	for(int i=0;i<n;i++){
	
		sum+=A[i].price;
	
	}

	ave=sum/n;

	return ave;
	




}
