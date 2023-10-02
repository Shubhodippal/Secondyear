#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to delete a node from the last index
void deleteLastNode(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* current = *head;

    // Traverse to the last node
    while (current->next != NULL) {
        current = current->next;
    }

    // Adjust pointers and free memory
    if (current->prev != NULL) {
        current->prev->next = NULL;
    } else {
        // If this was the only node in the list
        *head = NULL;
    }

    free(current);
    printf("Node at the last index deleted successfully.\n");
}

// Function to display the doubly linked list
void displayList(struct Node* head) {
    printf("Doubly Linked List: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Add some nodes to the doubly linked list
    head = createNode(1);
    head->next = createNode(2);
    head->next->prev = head;
    head->next->next = createNode(3);
    head->next->next->prev = head->next;

    // Display the initial doubly linked list
    displayList(head);

    // Delete the node at the last index
    deleteLastNode(&head);

    // Display the updated doubly linked list
    displayList(head);

    return 0;
}
