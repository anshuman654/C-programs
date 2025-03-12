#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int info;
	struct node *next;
};

struct node *insertInEmpty(struct node *start,int data);
void insertAtEnd(struct node *start,int data);
struct node *createList(struct node *start);
void display(struct node *start);
struct node *reverse(struct node *start);

int main(){

	struct node *start=NULL;

	start=createList(start);

	printf("original array");
	display(start);
	
	printf("reversed array");
	start=reverse(start);
	display(start);
	
	return 0;
}

struct node *insertInEmpty(struct node *start,int data){

	struct node *temp;

	temp=(struct node*)malloc(sizeof(struct node));

	temp->info=data;

	temp->prev=NULL;
	temp->next=NULL;

	start=temp;

	return start;
}

void insertAtEnd(struct node *start,int data){

	struct node *temp,*p;

	temp=(struct node*)malloc(sizeof(struct node));

	temp->info=data;

	temp->next=NULL;

	if(start==NULL){
		start=temp;
	}
	else{
		p=start;
	while(p->next!=NULL){
	
		p=p->next;
	}
	p->next=temp;
	temp->prev=p;
}
}

struct node *createList(struct node *start)
{

	int n,i,data;
	printf("enter the total number of nodes");
	scanf("%d",&n);

	 if (n <= 0) {
        	printf("Invalid number of nodes.\n");
        return start;
    }
	
	printf("enter the first element");
	scanf("%d",&data);
	start=insertInEmpty(start,data);

	for(i=2;i<=n;i++){
	
		printf("enter the next element");
		scanf("%d",&data);
		insertAtEnd(start,data);
	
	}
	return start;
}

void display(struct node *start){
	
	struct node *p;
	if(start==NULL){
	
		printf("List is empty");
	}
	else{
		p=start;
		while(p!=NULL){
		
		printf("%d",p->info);
		p=p->next;
		
		}
	}

}

struct node *reverse(struct node *start)
{

	struct node *p1,*p2;

	p1=start;
	p2=p1->next;;
	p1->next=NULL;
	p1->prev=p2;

	while(p2!=NULL){
		p2->prev=p2->next;
		p2->next=p1;
		p1=p2;
		p2=p2->prev;
	}
	start=p1;
	return start;

}	
