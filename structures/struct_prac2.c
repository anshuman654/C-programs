#include<stdio.h>

struct employee{
	int id;
	char name[30];
	int age;
	float salary;
};
int main()
{
	int n ;
	struct employee s[100];
		printf("Enter the total number of employee you want");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			printf("enter the details of the employee \n");

			printf("enter ID");
			scanf("%d",&s[i].id);

			printf("enter name");
			scanf("%s",s[i].name);

			printf("enter age");
			scanf("%d",&s[i].age);

			printf("enter salary");
			scanf("%f",&s[i].salary);

		}
		printf("The information about employee");
		for(int i=0;i<n;i++)
		{
			printf("%d %s %d %f",s[i].id,s[i].name,s[i].age,s[i].salary);
			
		}
		return 0;
}
