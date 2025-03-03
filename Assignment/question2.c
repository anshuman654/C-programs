#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};


struct node *insertinbeginning(struct node *start, int data) {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    return start;
}
void InsertAtEnd(struct node *start, int data) {
    struct node *temp, *p;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;  
    if (start == NULL) {
        start = temp;
        return;
    }
    p = start;
    while (p->link != NULL) {
        p = p->link;
    }
    
    p->link = temp;
}


struct node *createlist(struct node *start) {
    int n, data, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n == 0)
        return start;

    printf("Enter the first element of the node: ");
    scanf("%d", &data);
    start = insertinbeginning(start, data);

    for (i = 2; i <= n; i++) {
        printf("Enter the next element: ");
        scanf("%d", &data);
        InsertAtEnd(start, data);
    }

    return start;
}



void display(struct node *start) {
    struct node *p;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    
    p = start;
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}

void deleteAtEnd(struct node *start) {
    if (start == NULL) {
        return;
    }
struct node *temp = start;
struct node *p = NULL;
while (temp->link != NULL) {
p = temp;
temp = temp->link;
    }
    p->link = NULL;
    free(temp);
}

}

int main() {
    struct node *start = NULL;
    start = createlist(start);

    printf("before deletions ");
    display(start);
    deleteAtEnd(start);
    printf("after deletion");
    display(start);


    return 0;
}

