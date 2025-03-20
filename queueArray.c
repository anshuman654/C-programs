#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int a[MAX];
int front,rear;

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

		switch(choice)
		{
			case 1:
				printf("Enter the element to be inserted:");
				scanf("%d",&x);
				insert(x);
				break;
			case 2: x=delete();
				printf("element deleted is: %d",x);
				break;
			case 3:
				printf("Element at the front is: %d\n",peek());
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Size of queue is %d\n",size());
				break;

			deafault:
				printf("wrong choice");

		}
		printf("\n");
	
	}

}

void initializeQueue()
{
	rear=-1;
	front=-1;

}

int isEmpty()
{
	if(front==-1||front==rear+1)
		return 1;
	else 
		return 0;
}

int isFull()
{
	if(rear==MAX-1)
		return 1;
	else
		return 0;

}

int size()
{
	if(isEmpty())
		return 0;
	else 
		return rear-front+1;
}
void insert(int x)
{
	if(isFull())
	{
		printf("queue overflow\n");
	}
	if(front==-1)
		front=0;
		rear=rear+1;
		a[rear]=x;
}
int Delete()
{
	int x;
	if(isEmpty())
	{
		printf("Queue underFlow\n");
		exit(1);
	}
	x=a[front];
	front=front+1;
	return x;
}

int peek()
{
	if(isEmpty())
	{
		printf("queue underflow\n");
		exit(1);
	}
	return a[front];
}

void display()
{
	int i;

	if(isEmpty())
	{
			printf("que is empty\n");
			return;	
	}
	printf("Queue is ::\n\n");
	for(i=front;i<=rear;i++)
		printf("%d",a[i]);
	printf("\n\n");
} 
