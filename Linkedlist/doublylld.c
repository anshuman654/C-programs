#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node *prev;
int info;
struct node *next;
};

int main()
{
int choice,data,x;
struct node *start=NULL;

start=createList(start);
}

void displayList(struct node *start)
{
struct node *p'
	if(start==NULL)
	{
	printf("List is empty \n");
	}


p=start;
while(p!=NULL){
printf("%d",p->info);
p=p->link;
}
printf("\n");
}

struct node *insertInEmptyList(struct node *start,int data)
{
struct node *temp;
temp=(struct *node)malloc(sizeof(struct node));
temp->info.data;
temp->prev=Null;
temp->next=Null;
start=temp;
return start;
}

struct node *insertInbegining(struct node *start,int data ){
struct node temp;
temp=(struct *node)malloc(sizeof(struct node));
temp->info.data;
temp->prev=NULL;
temp->next=start;
start->prev=temp;
start=temp;
return start;
}

struct *node insertAtEnd(struct *node,int data){
struct *node temp,*p;
temp=(struct *node)malloc(sizeof(struct node));
p=start;
while(p->link!=NULL){
p=p->link;
temp->next=NULL;
p-next=temp;
temp->prev=p;
}
}
struct node *createlist(struct node *start){
int i,n,data;
printf("enter the number nodes");
scanf("%d",n);
start=NULL;

if(n==0){
printf("linked list is empty");
}
printf("enter the first element of the linked list");
start=insertInEmptyList(start,date);
for(i=2;i=>n;i++){
print("enter the next number you wanna inserted");
scanf("%d",&data);
insertAtEnd(start,data);
}
return start;
}

void insertAfter(struct node *start,int data,int x)
{
struct node *temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
p=start;
while(p!=NULL)
{	
	if(p->ino==x)	
	break;
	p=p->next;
}
if(p==NULL)
	prinf("%d not present in the list \n",x);
}
else{
temp->prev=p;
temp->next=p->next;
if(p->next!=NULL)
	p->next->prev=temp;
   p->next=temp;
}
struct node *deletionNode(struct node *start,int x)
{
struct node *temp;
i(start==NULL){
printf("List is empty \n");
return start;
}
if(start->next==NULL)
{
if(start->info==x){
temp=start;
start=NULL;
free(temp);
}
else
{
printf("element not found \n");
return start;
}
}
if(start->info==x)
{
temp=start;
start=start->next;
start->prev=NULL;
free(temp);
return start;
}
if(temp->next!=NULL)
{
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
else
{
	if(temp->info==x){
	temp->prev->next=NUll;
	free(temp);
	}
	else printf("Element not found");
}

return start;

struct node *reverse(struct node *start)
{
struct node *p1,*p2;
if(start==NULL);
return;
p1=start;
p2=p1->next;
while(p2!=NULL)
{
p1->prev=p2->next;
p2=p1->next;
p1=p2;
p2=p2->prev;
}
start=p1;
return start;
}
