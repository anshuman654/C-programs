#include<stdio.h>
#include<stdlib.h>

struct node{
int  info;
struct node*link;
}

struct node *insertINBeginning(struct node *start,int data){
struct node *temp;
temp=(struct *node)malloc(sizeof(struct node));
temp->into=data;
temp->link=start;
start=temp;
return start;
}

void InsertInEnd(struct node *start,int data){
struct node *temp,*p;
temp=(struct *node)malloc(sizeof(struct node));
temp->info=data;
temp->linl=NULL;

if(temp==null){
start=temp;
return start;
}
p=start;
while(p->link!=NULL){
p=p->link;
}
p->link=temp;
}

struct node *createll{
		int n,data,i;
printf("enter the total number of nodes");
scanf("%d",n);

printf("enter the first node");
scanf("%d",data);
start=insertInBeginning(start,data);


for(i=2;i<=n;i++)
{
printf("enter the next node");
scanf("%d",data);
InsertInEnd(start,data);
}
return start;
}

reverse(struct node **start){
int *prev,*next,*ptr;
prev=NULL;
ptr=start;
while(p->link=NULL){
next=ptr->link;
ptr->link=prev;
prev=ptr;
ptr=next;
}
start=prev;
}

struct node *display(struct node *start){
struct node *P;
p=start;
while(p->link!=NULL){
printf("%d",p->info);
p=p->link;
}
}

main(){
struct node *start=NULL;
start=createll();
printf("original ");
display(start);
reverse(&start);
printf("reverse linked list");
display(start);
}
