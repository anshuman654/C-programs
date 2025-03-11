#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *link;
};

struct node *createList(struct node *last);
void displayList(struct node *last);
struct node *insertInEmptyList(struct node *last,int data);
struct node *insertInBeginning(struct node *last,int data);
struct node *insertAtEnd(struct node *last,int data);
struct node  *insertAfter(struct node *last ,int data,int item);
struct node *deleteNode(struct node *last,int data);


int main(){
	int choice,data,item;
	struct node *last =NULL;

	last=createList(last);

	while(1)
	{
	printf("1:display \n");
	printf("2:insert in empty list \n");
	printf("3:insert in the Beggining \n");
	printf("4:insert at the end \n");
	printf("5:insert after the element \n");
	printf("6:Delete a node \n");
	printf("enter the your choice \n");
	scanf("%d",&choice);
		switch(choice){
			case 1:
			     displayList(last);
				break;
			case 2:
				printf("enter the node you want to enter in empty list");
			     	scanf("%d",&data);
				last=insertInEmptyList(last,data);
				break;
			case 3:
			     	printf("Enter the node you want to insert in the beginning");
			     	scanf("%d",&data);
				last=insertInBeginning(last,data);
				break;
			case 4:
			     	printf("enter the node you want to enter in the last");
			     	scanf("%d",&data);
				last=insertAtEnd(last,data);
				break;
			case 5:
			        printf("Enter the node you want to enter");
			     	scanf("%d",&data);
				printf("After which node you want to enter");
				scanf("%d",&item);
			     	last=insertAfter(last ,data,item);
				break;
			case 6:
			     	printf("Enter which node you want to delete");
			     	scanf("%d",&data);
				last=deleteNode(last,data);
				break;
			default:
				printf("wrong choice");
}
	}			

	return 0;
}

void displayList(struct node *last){
	struct node *p;
	if(last==NULL){
		printf("List is empty");
	}

	p=last->link;
	do{
		printf("%d",p->info);
		p=p->link;
	}while(p!=last->link);
	
	printf("\n");
}

struct node *insertInBeginning(struct node *last,int data){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;

	temp->link=last->link;
	last->link=temp;

	return last;
} 


struct node *insertInEmptyList(struct node *last,int data){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;

	last=temp;
	last->link=last;

	return last;
}

struct node *insertAtEnd(struct node *last,int data){
	struct node * temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;

	temp->link=last->link;
	last->link=temp;
	last=temp;

	return last;
}

struct node *createList(struct node *last){
	int i,data,n;
	printf("how many nodes you want:");
	scanf("%d",&n);
		
	last=NULL;
        if(n==0){
                return last;
        }
	if(n==1){
	printf("So the size is 1, enter more elements");
	return last;
	}


	printf("enter the first node");
	scanf("%d",&data);
	last=insertInEmptyList(last,data);
	
	for(i=2;i<=n;i++){
		printf("enter the next element: ");
		scanf("%d",&data);
		last=insertAtEnd(last,data);
	}

	return last;
}

struct node  *insertAfter(struct node *last ,int data,int item){
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	
	p=last->link;
	do{
	
		if(p->info=item)
			break;
			p=p->link;
	
	}while(p!=last->link);

	if(p==last->link && p->info!=item){
		printf("not present");
	}
	else{
		temp->link=p->link;
		p->link=temp;
		if(p==last)
		{
		last=temp;
		}
		return last;
	}

}

struct node *deleteNode(struct node *last,int data){

	struct node *temp,*p;
	if(last==NULL){
		printf("empty list");
	}
	//only node
	if(last->link==last && last->info==data){
		last=temp;
		last=NULL;
		free(temp);
		return last;
	}
	//first node
	if(last->link->info==data){
		temp=last->link;
		last->link=temp->link;
		free(temp);

		return last;
	}
	p=last->link;
while(p->link!=last){
	 if(p->info==data)
                        break;
                p=p->link;
}
	if(p->link!=last){
	temp=p;
	p->link=temp->link;
	free(temp);

	return last;
	
	}
	else
	{
	if(last->info==data){
		temp=last;
		p->link=last->link;
		last=p;
		free(temp);

		return last;
	}
	}


}

