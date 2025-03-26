#include<stdio.h>

int main(){

void initializeQueue();
int is full();
int isempty;
int size();
void insert(int x);
int delete();
int peak();
int display();

main()
{
	int choice,x;

	initializeQueue();

	while(1)
	{
		printf("1.insert an element in the queuq \n");
		printf("2.delete an element in the queuq \n");
		printf("3. Display element at the front\n");
		printf("4. display all the elements of the queue\n");
		printf("5. dispaly size of the queue");
		printf("6. Quit\n");
		printf("Enter your choice ::");
		scanf("%d",&choice);

		if(choise==6)
			break;
		switch(choise)
		{
			case 1:
				printf("Enter the element to be inserted:");
				scanf("%d",&d);
				insert(x);
				break;
			case 2:
				x=Delete();
				printf("element at the front is %d",x);
				break;
			case 3: 
				printf("Element at the front is: %\n",peek());					break;
			case 4: 
				display();
				break;
			case 5:
				printf("size of the queue is %d",size());
				break;
			default:
				printf("wrong choice \n");

		}
		printf("\n");
}	

void initializeQueue()
{
	front=NULL;
	rear=NULL;

}

int size(){
	int s=0;
	struct node *p=front;
	while(p!=NULL){
		s++;
		p=p->link;
	}
	return s;
}

void insert(int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("memory not available\n");
		return ;

	}
	temp->info=x;
	temp->link=NULL;

	if(front==NULL)
		front=temp;
	else
		rear->link=temp;
	rear=temp;
}
int delete(){
	struct node *temp;
	int x;
	if(isEmpty())
	{
		printf("Queue underflow \n");
		exit(1);
	}
	temp=front;
	x=temp->info;
	front=front->link;
	free(temp);
	return x;
}
int peek()
{
	if(ifEmpty())
	{
		printf("queue underflow");
		exit(1);
	}
	return front->info;
}

int isEmpty()
{
	if(front==NULL)
		return 1;
	else return 0;
}

void display()
{
	struct node *p;
	p=front;
	if(idEmpty())
	{
		printf("%d",p->info);
		p=p->link;
	}
	printf("\n\n");
}

