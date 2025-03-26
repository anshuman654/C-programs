#include<stdio.h>
#include<string.h>

struct student{

	int rollnumber;
	char name[450];
	char department[450];
	char course[450];
	int yearOfJoining;
};

void particularYear(struct student A[], int n, int year);
void data(struct student A[], int n, int rn);

int main(){

	struct student A[450];
	int n,i;
	
	printf("how many students you want");
	scanf("%d",&n);
	printf("enter the details of students\n");

	for(i=0;i<n;i++){
	printf("Enter the roll number\n");
	scanf("%d",&A[i].rollnumber);
	printf("Enter the name\n");	
	scanf("%s",A[i].name);
	printf("Enter the department\n");
	scanf("%s",A[i].department);
	printf("Enter the course\n");
	scanf("%s",A[i].course);
	printf("Enter the year of joining\n");
	scanf("%d",&A[i].yearOfJoining);
	}
	
	
	particularYear(A,n,2025);
	data(A,n,2);
	
	return 0;
}

void particularYear(struct student A[],int n,int year){

	int count=0;

	for(int i=0;i<n;i++){
		if(A[i].yearOfJoining==year){
			printf("NAME::%s",A[i].name);
			count++;
		}
	}
	if(count==0){
		printf("no student is found in this year");
	}

}
void data(struct student A[],int n,int rn){

	for(int i=0;i<n;i++){
	
		if(A[i].rollnumber==rn){
			printf("%d\n",A[i].rollnumber);
			printf("%s\n",A[i].name);
			printf("%s\n",A[i].department);
			printf("%s\n",A[i].course);
			printf("%d\n",A[i].yearOfJoining);
			return;
		}
		}
	printf("this roll number is not present");
}

