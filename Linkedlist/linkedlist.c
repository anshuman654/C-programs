#include<stdi;o.h>
#include<stdlib.h>

struct node
{
int info;
struct node *link;
}

struct node *insertinbeginning(struct node *start,int data){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->info=data;
temp->link=start;
start=temp;
return start;
}

void InsertAtEnd(struct node start,int data)
{
struct node *temp,*p;
temp=(struct node*)malloc(sizeof(struct node));
while(p->link!=NULL){
p=p->link;
}
p->link=temp;
temp->link=NULL;
}


struct node *createlist(struct node *start)
{
	int n,data,i ;
printf("enter the number of nodes");
scanf("%d",n);
if(n==0)
	return start;
printf("enter the first element of the node");
scanf("%d",data);
start=insertinbeginning(start,data);
for(i=2;i<=n;i++){
printf("enter the next elements");
scanf("%d",data);
InsertAtEnd(start,data);
}
}

void reverse(struct node *start)
{
struct node *prev,*ptr,*next;
ptr=start;
prev=NULL;
while(p->link!=NULL){
next=p->link;
p->link=prev;
prev=ptr;
ptr=next;
}
start=prev;
return 0;
}

struct node *display(struct node start){
struct node *p;
if(start==NULL){
printf("list is empty");
}
while(p->link!=start){
printf("%d",p->info);
p=p->link;
}
printf("\n");
}

 main(){
 struct node *start=NULL;
 start=createlist(start);
 }
