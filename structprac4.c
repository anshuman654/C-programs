#include<stdio.h>

struct employee{
	int ID;
	char name[50];
	float salary;
};

int main()
{
	struct employee employe1, employe2, employe3;
	
	printf("Input details for emloye 1: \n");
	printf("Employee ID:");
	scanf("%d",&emplye1.ID);
	printf("Name:");
	scanf("%s",employe1.name);
	printf("salary:");
	scanf("%f",&employe1.salary);

	printf("Input details for emloye 2: \n");
        printf("Employee ID:");
        scanf("%d",&emplye2.ID);
        printf("Name:");
        scanf("%s",employe2.name);
        printf("salary:");
        scanf("%f",&employe2.salary);

	printf("Input details for emloye 3: \n");
        printf("Employee ID:");
        scanf("%d",&employe3.ID);
        printf("Name:");
        scanf("%s",employe.name);
        printf("salary:");
        scanf("%f",&employe3.salary);

	struct employe highestSalaryEmployee;

	if((employe1.salary>employe2.salary)&&(employe1.salary>employe3.salary))
	{
		highestSalaryEmployee=employe1.salary;
	}
	if((employe2.salary>employe1.salary)&&(employe2.salary>employe3.salary))
	{	
		highestSalaryEmployee=employe2.salary;
	}
	if((employe3.salary>employe1.salary)&&(employe3.salary>employe2.salary))
	{
		highestSalaryEmployee=employe3.salary;
	}

	printf("highest paid salary \n");
	printf("EployeeID: %d",highestSalaryEmployee.ID);
	printf("Employe name %s",highestSalaryEmployee.name);
	printf("salary: %f",highestSalaryEmployee.salary);
	
	return 0;
}
