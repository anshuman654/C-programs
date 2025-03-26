#include<stdio.h>
#include<stdlib.h>

struct Employee {
    int code;
    char name[50];
    int joiningYear;
    int joiningMonth;
    int joiningDay;

};

void cal_Tenure(int joiningYear,int joiningMonth,int joiningDay,int currentYear,int currentMonth,int currentDay); 

int main(){

	struct Employee A[50];
	printf("Enter the number of employes you want to enter");
	scanf("%d",n);


for (int i = 0; i < n; i++) {
    printf("Enter details for employee %d:\n", i + 1);
    printf("Employee Code: ");
    scanf("%d", &employees[i].code);
    printf("Name: ");
    scanf("%s", employees[i].name);
    printf("Date of Joining (YYYY MM DD): ");
    scanf("%d %d %d", &employees[i].joiningYear, &employees[i].joiningMonth, &employees[i].joiningDay);
}

	 	printf("Enter current date (YYYY MM DD): ");
    		scanf("%d %d %d", &currentYear, &currentMonth, &currentDay);

	for(int i=0;i<n;i++){

	int ten=cal_Tensure(A[i].joiningYear,A[i].joiningMonth,A[i].joiningDay,currentYear,currentMonth,currentDay);

	if(ten>=3){
		
		printf("%d %s %d %d %d",A[i].joiningYear,A[i].joiningMonth,A[i].joiningDay);

	}	
	}


	return 0;
}
