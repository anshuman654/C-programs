#include<stdio.h>

#define MAX 100

struct student{

	char name[50];
	int age;
	float grade;

};

void print_top_student(struct student A[], int n){

        float top=0;
        for(int i=0;i<n;i++){

                if(top<A[i].grade){

                        top=A[i].grade;

                }
        }
        for(int i=0;i<n;i++){

                if(top==A[i].grade){

                        printf("Name::%s Age:%d Grade::%f",A[i].name,A[i].age,A[i].grade);

                }

        }

}


int main(){

	struct student A[MAX];
	int n ;

	printf("how many students you want");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
	printf("Enter the data of the students");

	printf("Enter the name");
	scanf("%s",A[i].name);

	printf("enter the age");
	scanf("%d",&A[i].age);

	printf("Enter the grade");
	scanf("%f",&A[i].grade);
	}
	
	print_top_student(A,n);
}


