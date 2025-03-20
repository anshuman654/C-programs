#include<stdio.h>
#include<stdlib.h>
#define MAX 50;

int a[MAX];
int top;

void initializeStack();
int isEmpty();
int isFull();
int size();
int peek();
void push(int x);
int pop();
void display();

main()
{
	int choice,x;

	initializeStack();

	while(1)
	
	{
		printf("1. push an element on the stack \n");
		printf("2. pop an element from the stack \n");
		printf("3. display the top element \n");
		printf("4. display all stack elements \n");
		printf("5. dispaly size of the stack \n");
		printf("6. quit\n");
		printf("Entert your choice \n");
		scanf("%d",&choice);
		if(choise==6)
			break;
		switch(choise){
		
			case 1:
				printf("enter the element to be pushed :");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				x=pop();
				printf("poppeed elemnt is : %d\n",x);
				break;
			case 3:
				printf("Element at the top is %d\n",peek());
				break;	
			case 4:
				display();
				break;
			case 5:
				printf("size of the stack = %d\n",size());
				break;

			default:
				printf("wrong choice \n");
	}
			printf("\n");
	
	}
}

void initializeStack()
{
	top=-1;
}

int size()
{
	return top+1;
}
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isFull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

void push(int x)
{
	if(isFull())
	{
		printf("stack Overflow \n");
		return;
	}	
	top=top+1;
	a[top]=x;
}

int pop()
{
	int x;
	if(isEmpty())
	{
		printf("stack underflow \n");
		exit(1);
	}
	x=a[top];
	top=top-1;
	return x;

}

int peek()
{
	if(isEmpty())
	{
		printf("stack underflow \n");
		exit(1);
	}
	return a[top];
}

void display()
{
	int i;
	printf("top::%d",top);

	if(isEmpty())
	{
		printf("stack is empty \n");
		return;
	}
	printf("stack is \n\n");
	for(i=top;i>=0;i--){
		printf("%d\n",a[i]);
		printf("\n");
	}
}
