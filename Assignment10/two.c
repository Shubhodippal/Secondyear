#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
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

// Function to insert a node at the beginning of the circular linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        newNode->next = newNode; // Point to itself to form a circular link
    } else {
        newNode->next = head->next;
        head->next = newNode;
    }
    return newNode;
}

// Function to display the circular linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* current = head->next;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head->next);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements at the beginning of the circular linked list
    head = insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 40);

    // Display the circular linked list
    printf("Circular Linked List: ");
    display(head);

    return 0;
}
