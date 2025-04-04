#include<stdio.h>
#include<string.h>

struct Employee{

	char name[100];
	int id;
	float salary;

};

void displayEmployees(struct Employee* employees, int count);

int main(){
	
	struct Employee employees[100];
	int count;

	printf("Enter the number of employes you want to enter");
	scanf("%d",&count);


	for (int i = 0; i < count; i++) {
    	printf("Enter details for employee %d:\n", i + 1);
    	printf("Employee name: ");
    	scanf("%s", employees[i].name);
    	printf("ID: ");
    	scanf("%d", &employees[i].id);
    	printf("salary: ");
    	scanf("%f",&employees[i].salary);
	}

	displayEmployees(employees, count);


	return 0;
}

void displayEmployees(struct Employee* employees, int count){

	for(int i=0;i<count;i++){
	
		printf("%s %d %f",employees[i].name,employees[i].id,employees[i].salary);
	
	}


}
