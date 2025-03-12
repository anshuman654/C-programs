#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};
 
struct node *insertInBeginning(struct node *start, int data);
struct node *insertAtEnd(struct node *start, int data);
struct node *createList(struct node *start);
void insertCycle(struct node *start, int x);
struct node *findCycle(struct node *start);
void removeCycle(struct node *start, struct node *px);

int main() {
    struct node *start = NULL;
    struct node *cycleNode;

    
    start = createList(start);

    // Insert a cycle at a specific node (for example, node with value 3)
    insertCycle(start, 3);

    // Detect cycle
    cycleNode = findCycle(start);
    if (cycleNode != NULL) {
        printf("Cycle detected at node with value: %d\n", cycleNode->info);
    } else {
        printf("No cycle detected.\n");
    }

    // Remove the cycle
    if (cycleNode != NULL) {
        removeCycle(start, cycleNode);
        printf("Cycle removed.\n");
    }

    return 0;
}

struct node *createList(struct node *start) {
    int i, data, n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the first element: ");
    scanf("%d", &data);
    start = insertInBeginning(start, data);

    for (i = 2; i <= n; i++) {
        printf("Enter the next element: ");
        scanf("%d", &data);
        start = insertAtEnd(start, data);
    }

    return start;
}

struct node *insertInBeginning(struct node *start, int data) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}

struct node *insertAtEnd(struct node *start, int data) {
    struct node *temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;

    if (start == NULL) {
        start = temp;
    } else {
        p = start;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }

    return start;
}

void insertCycle(struct node *start, int x) {
    struct node *p = start, *prev,*px;

    p=start;

    while(p!=NULL){
    	
	    if(p->info==x){
	    	px=p;
	    }
	    prev=p;
	    p=p->link;
    }
	if(px!= NULL && prev!= NULL){
	
		prev->link=px;
	}
    }


struct node *findCycle(struct node *start) {
    struct node *slow = start, *fast = start;

    while(fast!=NULL && fast->link=NULL){
	slow=slow->link;
    fast=fast->link->link;

    if(fast==slow){
	return slow;
    }
    
    }
	return NULL;
}

void removeCycle(struct node *start, struct node *px) {
    struct node *p, *q=px;

    int cycleLength = 0, lenRemainingList = 0, totalLength=0;

      p=q;
    do {
        cycleLength++;
        q = q->link;

    } while (p != q);  

    p=start;
    lenRemainingList = 0;
    while (p != q) { 
        lenRemainingList++;
        p = p->link;
    }

    totalLength = cycleLength + lenRemainingList;

    
    for (int i = 0; i < totalLength - 1; i++) {
        p = p->link;  
    }

    p->link = NULL;  
}





    

 
