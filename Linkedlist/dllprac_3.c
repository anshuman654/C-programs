#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
 	int info;
	struct node *next;
};

struct node *insertAttheemptyList(stuct node *start,int data);
void insertAtend(struct node start,int data);
struct node *createlinkedList(struct node *start);
struct node *insertAttheBeginning(struct node *start,int data);
void display(start);
void insertAfter(struct node *start,int data,int x);
struct node *insertBefore(struct node *start,int data,int x);
struct node *delete a node(struct node *start,int x)

int main(){
node struct *start=NULL;
start=createlinkedList(start)
}

struct node *insertAttheemptyList(stuct node *start,int data)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	
	temp->prev=NULL;
	temp->next=NULL;
	start=temp;
	return start;
}

void insertAtend(struct node start,int data)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;

	p=start;
	while(p!=NULL){
	if(p->next==NULL){
		p->next=temp;
		temp->prev=p;
		temp->next=NULL;
		return;
	}
	p=p->next;
	}
}

struct node *createlinkedlist(struct node *start){
	int n,i,data;
		printf("enter the total number of nodes");
		scanf("%d",&n);
		start=NULL;
		if (n==0) return  start;
	
		printf("enter the first element you want to insert");
		scanf("%d",&data);
		start=insertAttheemptyList(start,data);

		for(i=2;i<n;i++){
			printf("enter the next element");
			scanf("%d",&data);
			insertAtend(start,data);
		}
	return start;
}

struct node *insertAttheBeginning(struct node *start,int data){
	struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->info=data;
		temp->prev=NULL;
		temp->next=start;
		if(start!=NULL)
		{
			start->prev=temp;	
		}
		start=temp;
		return start;
}

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("list is empty");
	}
	p=start;
	while(p!=NULL){
		printf("%d",p->info);
		p=p->next;
	}
	return;
}

void insertAfter(struct node *temp,int data,int x)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p!=NULL)
	{
		if(p->info==x)
			break;
			p=p->next;
	}
	if(p==NULL)
	{
		printf("not present");
	}
	else
	{
		temp->prev=p;
		temp->next=p->next;
		if(p->next!=NULL)
		p->next->prev=temp->next;
		p->next=temp;
		return;
	}
}

struct node *insertBefore(struct node *start,int data,int x)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	p=start;
	while(p!=NULL)
	{
		if(p->info==x)
			break;
		p=p->next;
	}
	if(p==NULL)
	{
		printf("not present");
	}
	else
	{
		temp->next=p;
		temp->prev=p->prev;
		if(p->prev!=NULL)
			p->prev->next=temp->;
		p->prev=temp;
	}
	return start;
}

struct node *delete(struct node *start,int x)
{
	struct node *temp;
	if(start==NULL)
	{
		printf("list is empty");
	}
	if(start->info==NULL)
	{
		if(start->info==x)
	{
			temp=start;
			start=NULL;
			free(temp);
	}
	}
	if(start->info=x)
	{	
		temp=start;
		start=temp->next;
		start->prev=NULL;
		free(temp;)
	}
	temp=start->next;
	while(temp!=NULL)
	{
		if(temp->info==x)
			break;
			temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("not present");
	}
	else
	{
		temp->prev->next=temp-next;
		if(temp->next!=NULL)
		temp->next->prev=temp->prev;
		free(temp);
	}
	return start;
}
