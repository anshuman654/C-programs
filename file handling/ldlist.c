#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

void displaylist(struct node *start);

int main() {
    struct node *start = (struct node*)malloc(sizeof(struct node));
    start->info = 45;
    start->link = NULL;
    
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->info = 98;
    current->link = NULL;
    start->link = current;
    
    current = (struct node*)malloc(sizeof(struct node));
    current->info = 100;
    current->link = NULL;
    start->link->link = current;  // Correctly link the third node
    
    displaylist(start);  // Call displaylist before return
    
    return 0;
}

void displaylist(struct node *start) {
    struct node *p;
    if (start == NULL) {
        printf("Linked list is empty \n");
        return;
    }
    printf("List is: ");
    p = start;
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}

