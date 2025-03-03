#include<stdio.h>

struct node{
int info;
struct node *link;
};

void display(struct node *last)
{
struct node *p;
if(last==NULL){
printf("empty");
}
p=last->link;
do{
printf("%d",p->info);
p=p->link
}while(p!=last->link);
printf("\n";)
}

struct node *insertAfter(struct node *last,int data,int x)
{
struct node *temp,*p;
p=last->link;
do
{
if(p>info=x)
	break;
p=p->link;
}while(p!=last->link);
if(p==last->link&&p->info!=x)
	printf("not present in the cll");
	else{
	temp=(struct *node)malloc(sizeof(strut node));
	temp-info=data;
	temp->link=p->link;
	p->link=temp;
	if(p==last)
		last=temp;
	}
return last;
}

struct node *deleteNode(struct node *last,int x){
struct node *temp,*p;
if(last==null){
printf("empty")
return last;
}
if(last->==last && last->info==x)
{
temp=last;
last=NULL;
free(temp);
return last;
}

if(last->link->info==x)
{
temp=last->link;
last->link=temp->link;
free(temp);
return last;
}
p=last->link;
while(p->link->info==x)
	break;
	p=p->link;
}


main(){
struct node *last=NULL;
}
