#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
struct node {
    int data;
    struct node *link;
};

// Function to detect a cycle in the linked list
struct node *findCycle(struct node *start) {
    struct node *slowp, *fastp;

    // If the list is empty or has only one node
    if (start == NULL || start->link == NULL)
        return NULL;

    slowp = fastp = start;

    // Move slowp by one step and fastp by two steps
    while (fastp != NULL && fastp->link != NULL) {
        slowp = slowp->link;          // Slow pointer moves one step
        fastp = fastp->link->link;    // Fast pointer moves two steps

        // If slowp and fastp meet, there is a cycle
        if (slowp == fastp)
            return slowp;  // Return the node where they meet
    }

    // If no cycle is found, return NULL
    return NULL;
}

// Function to remove the cycle in the linked list
void removeCycle(struct node *start) {
    struct node *cycleStart = findCycle(start);

    // If no cycle, return
    if (cycleStart == NULL) {
        printf("No cycle detected.\n");
        return;
    }

    struct node *ptr1 = start;
    struct node *ptr2 = cycleStart;

    // Find the node that is part of the cycle
    while (ptr1 != ptr2) {
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
    }

    // Now ptr1 and ptr2 are at the start of the cycle
    struct node *cycleNode = ptr1;
    
    // Move one pointer to the last node in the cycle
    while (ptr2->link != cycleNode) {
        ptr2 = ptr2->link;
    }

    // Break the cycle by making the last node point to NULL
    ptr2->link = NULL;
    printf("Cycle removed.\n");
}

// Function to create a new node
struct node* newNode(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    return temp;
}

// Function to print the linked list (for testing purposes)
void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

// Main function for testing
int main() {
    // Create nodes for the linked list
    struct node *head = newNode(1);
    head->link = newNode(2);
    head->link->link = newNode(3);
    head->link->link->link = newNode(4);

    // Creating a cycle for testing
    head->link->link->link->link = head->link;  // Cycle created here (4 -> 2)

    // Detect and remove the cycle
    removeCycle(head);

    // Print the list after removing the cycle
    printList(head);

    return 0;
}

