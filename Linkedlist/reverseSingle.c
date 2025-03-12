#include<stdio.h>
#include<stdlib.h>

struct node{

	int info;
	struct node *link;
};

struct node *createList(struct node *start);
struct node *insertInbeginning(struct node *start,int data);
void insertAtEnd(struct node *start,int data);
void display(struct node *start);
void reverse(struct node *start);

int main(){

	struct node *start=NULL;
	start=createList(start);
	
	printf("original array");
	display(start);

	printf("reversed array");
	reverse(start);
	display(start);

	return 0;
}

struct node *insertInbeginning(struct node *start,int data){
	
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	temp->info=data;

	temp->link=start;

	start=temp;

	return start;

}

void insertAtEnd(struct node *start,int data){

	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));

	temp->info=data;
	
	if(start==NULL){
		start=temp;	
	}
	else{
		p=start;

		while(p!=NULL){
			p=p->link;
		}
		p->link=temp;
		temp->link=NULL;
	}
}

struct node *createList(struct node *start){

	int n,i,data;

	printf("enter the how many nodes you want");
	scanf("%d",&n);

	printf("enter the 1st node");
	scanf("%d",&data);
	start=insertInbeginning(start,data);
	
	for(i=2;i<=n;i++){
	printf("enter the next elemnet");
	scanf("%d",&data);
	insertAtEnd(start,data);

	}
	return start;
}

void reverse(struct node *start){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));

	temp->info=data;
	



}
