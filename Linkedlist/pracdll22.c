#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int info;
    struct node *next;
};

struct node *createList(struct node *start);
void displayList(struct node *start);
struct node *insertInEmptyList(struct node *start, int data);
struct node *insertInBeginning(struct node *start, int data);
void insertAtEnd(struct node *start, int data);
void insertAfter(struct node *start, int data, int x);
struct node *insertBefore(struct node *start, int data, int x);
struct node *deleteNode(struct node *start, int x);
struct node *reverseList(struct node *start);

int main() {
    int choice, data, x;
    struct node *start = NULL;

    start = createList(start);

    while(1) {
        printf("\n");
        printf("1. Display List \n");
        printf("2. Insert in empty list \n");
        printf("3. Insert a node at the beginning of the list\n");
        printf("4. Insert the node at the end of the list\n");
        printf("5. Insert a node after a specified node\n ");
        printf("6. Insert a node before a specified node\n");
        printf("7. Delete a node\n");
        printf("8. Reverse the list\n");
        printf("9. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 9)
            break;

        switch(choice) {
            case 1:
                displayList(start);
                break;
            case 2:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                start = insertInEmptyList(start, data);
                break;
            case 3:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                start = insertInBeginning(start, data);
                break;
            case 4:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                insertAtEnd(start, data);
                break;
            case 5:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                printf("Enter the element after which to insert: ");
                scanf("%d", &x);
                insertAfter(start, data, x);
                break;
            case 6:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                printf("Enter the element before which to insert: ");
                scanf("%d", &x);
                start = insertBefore(start, data, x);
                break;
            case 7:
                printf("Enter the element to be deleted: ");
                scanf("%d", &data);
                start = deleteNode(start, data);
                break;
            case 8:
                start = reverseList(start);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
}

void displayList(struct node *start) {
    struct node *p;
    if (start == NULL) {
        printf("Empty list\n");
        return;
    }
    p = start;
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
}

struct node *insertInEmptyList(struct node *start, int data) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    temp->prev = NULL;
    start = temp;
    return start;
}

struct node *insertInBeginning(struct node *start, int data) {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->prev = NULL;
    temp->next = start;
    if (start != NULL)
        start->prev = temp;
    start = temp;
    return start;
}

void insertAtEnd(struct node *start, int data) {
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    p = start;
    while (p != NULL && p->next != NULL) {
        p = p->next;
    }
    if (p == NULL) { // If the list is empty
        start = temp;
    } else {
        p->next = temp;
        temp->prev = p;
    }
}

struct node *createList(struct node* start) {
    int i, n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;

    if (n == 0) return start;

    printf("Enter the first element: ");
    scanf("%d", &data);
    start = insertInEmptyList(start, data);

    for (i = 2; i <= n; i++) {
        printf("Enter the next element: ");
        scanf("%d", &data);
        insertAtEnd(start, data);
    }
    return start;
}

void insertAfter(struct node *start, int data, int x) {
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    p = start;
    while (p != NULL) {
        if (p->info == x)
            break;
        p = p->next;
    }
    if (p == NULL)
        printf("Element %d not found in the list.\n", x);
    else {
        temp->prev = p;
        temp->next = p->next;
        if (p->next != NULL)
            p->next->prev = temp;
        p->next = temp;
    }
}

struct node *insertBefore(struct node *start, int data, int x) {
    struct node *temp, *p;
    if (start == NULL) {
        printf("List is empty\n");
        return start;
    }
    if (start->info == x) {
        return insertInBeginning(start, data);
    }
    p = start;
    while (p != NULL) {
        if (p->info == x)
            break;
        p = p->next;
    }
    if (p == NULL) {
        printf("Element %d not found in the list.\n", x);
    } else {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = data;
        temp->prev = p->prev;
        temp->next = p;
        if (p->prev != NULL)
            p->prev->next = temp;
        p->prev = temp;
    }
    return start;
}

struct node *deleteNode(struct node *start, int x) {
    struct node *temp;

    if (start == NULL) {
        printf("List is empty\n");
        return start;
    }

    if (start->next == NULL) { // Only one element in the list
        if (start->info == x) {
            temp = start;
            start = NULL;
            free(temp);
        } else {
            printf("Element %d not found.\n", x);
        }
        return start;
    }

    if (start->info == x) { // If the node to delete is the first node
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return start;
    }

    temp = start->next;
    while (temp != NULL) {
        if (temp->info == x)
            break;
        temp = temp->next;
    }

    if (temp == NULL) { // Element not found
        printf("Element %d not found.\n", x);
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        free(temp);
    }
    return start;
}

struct node *reverseList(struct node *start) {
    struct node *temp = NULL;
    struct node *current = start;
    
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL) {
        start = temp->prev;
    }
    return start;
}

