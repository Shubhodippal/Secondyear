#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at a specified position in the linked list
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);
    
    if (position == 0) {
        // Special case: inserting at the beginning
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* current = *head;
        int currentPos = 0;
        
        // Traverse the list to find the node before the desired position
        while (current != NULL && currentPos < position - 1) {
            current = current->next;
            currentPos++;
        }
        
        if (current == NULL) {
            printf("Invalid position. Insertion not possible.\n");
            free(newNode);
            return;
        }
        
        // Insert the new node into the list
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty linked list

    // Insert elements into the linked list at various positions
    insertAtPosition(&head, 1, 0); // Insert at the beginning
    insertAtPosition(&head, 3, 2); // Insert at position 1
    insertAtPosition(&head, 2, 1); // Insert at position 1

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}
