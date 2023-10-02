#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node at the last index
struct Node* insertAtLast(struct Node* head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // If the list is empty, make the new node as the head
    if (head == NULL) {
        head = newNode;
    } else {
        // Traverse the list to find the last node
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Update pointers to insert the new node at the last index
        current->next = newNode;
        newNode->prev = current;
    }

    return head;
}

// Function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Doubly Linked List: ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes at the last index
    head = insertAtLast(head, 1);
    head = insertAtLast(head, 2);
    head = insertAtLast(head, 3);

    // Print the updated list
    printList(head);

    return 0;
}
