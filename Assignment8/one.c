#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node at the first index
struct Node* insertAtFirst(struct Node* head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // If the list is empty, make the new node as the head
    if (head == NULL) {
        head = newNode;
    } else {
        // Update pointers to insert the new node at the first index
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
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

    // Insert nodes at the first index
    head = insertAtFirst(head, 3);
    head = insertAtFirst(head, 2);
    head = insertAtFirst(head, 1);

    // Print the updated list
    printList(head);

    return 0;
}
