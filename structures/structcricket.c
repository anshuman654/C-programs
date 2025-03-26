#include<stdio.h>
#include<stdlib.h>

struct cricketer{

	char name[100];
	int year;
	int numberOfTest;
	int averageInTest;

};

void camparison(const void *a,const void *b){

	 struct Cricketer *cricketerA = (struct Cricketer *)a;
    struct Cricketer *cricketerB = (struct Cricketer *)b;

     if (cricketerA->averageRuns < cricketerB->averageRuns) return -1;
     if (cricketerA->averageRuns > cricketerB->averageRuns) return 1;


     return 0;
}

int main(){

 	struct cricketer A[20];
 	int n;

	printf("Enter the number of cricketers you want to enter");
	scanf("%d",n);

	for(i=0;i<n;i++){
	
		printf("enter the information about cricketer");
		printf("enter the name");
		scanf("%s",A[i].name);
		printf("enter the year");
		scanf("%d",&A[i].year);
		printf("enter the number of test");
		scanf("%d",&A[i].numberOfTest);
		printf("enter the average in test");
		scanf("%d",&A[i].averageInTest);	
	}

	qsort(A,n,sizeof(struct cricketer),comparison);
	
	printf("\nCricketers sorted by average runs:\n");
   		 for (int i = 0; i < MAX_CRICKETERS; i++) {
        		printf("Name: %s, Age: %d, Test Matches: %d, Average Runs: %.2f\n",
              			 cricketers[i].name, cricketers[i].age, cricketers[i].testMatches, cricketers[i].averageRuns);
	

	return 0;
}
