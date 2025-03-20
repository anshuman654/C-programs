#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;

};
struct node *top;

void initializeStack();
int isEmpty();
int size();
void push(int x);
int pop();
int peek();
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
		switch(choice){
		
			case 1:
				printf("enter the elemnet to be pushed :");
				scanf("%d",&x);
				psuh(x);
				break;
			case 2:
				x=pop;
				printf("popped elemnt is : %d \n",x);
				break;
			case 3: 
				printf("element at the top is %d\n",peek());
				break;
			case 4:
				display();
				break;
			case 5: 
				printf("size of stack = %d\n");
				break;

			default:
				printf("wrong choice\n");
		}
		printf("\n");
	}
		
		
		}

void initializeStack(){
	
	top=NULL;
}

int size(){

	int s=0;
	struct node *p=top;
	while(p!=NULL){
		p=p->link;
		s++;
	}
	return s;
}
void push(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("stack overflow");
	}
	temp->info=x;
	temp->link=top;
	top=temp;
	
}	

int pop()
{
	struct node *temp;
	int x;
	if(isEmpty()){
		printf("underflow\n");
		exit(1);
	}
	temp=top;
	x=temp->info;
	top=top->link;
	free(temp);
	return x;


}
void peek(){
	if(isEmpty()){
		printf("stack underflow\n");
		exit(1);
	}
	return top->info;
}

int isEmpty()
{
	if(top==NULL)
		return 1;
	else 
		return 0;
}
void display(){
	struct node *p;
	while(p!=NULL){
		printf("%d",p->info);
		p=p->link;
	}
}
	
	
