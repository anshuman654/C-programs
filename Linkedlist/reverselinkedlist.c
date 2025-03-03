#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
void reverse(struct Node** head) {
    struct Node *prev = NULL;
    struct Node *current = *head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;  // Save next node
        current->next = prev;  // Reverse the link
        prev = current;        // Move prev to current node
        current = next;        // Move to the next node
    }
    *head = prev;  // Update head to the new first node
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a new node at the end
void append(struct Node** head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// Main function
int main() {
    struct Node* head = NULL;

    // Create a linked list 1 -> 2 -> 3 -> 4 -> 5
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("Original List: ");
    printList(head);

    reverse(&head);

    printf("Reversed List: ");
    printList(head);

    return 0;
}

