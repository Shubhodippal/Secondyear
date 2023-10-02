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

// Function to delete a node from a specified index
void deleteNodeAtIndex(struct Node** head, int index) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* current = *head;
    int i = 0;

    // Traverse to the specified index or the end of the list
    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        printf("Index out of range. Node not found.\n");
        return;
    }

    // Adjust pointers and free memory
    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        // If this was the first node in the list
        *head = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
    printf("Node at index %d deleted successfully.\n", index);
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
    head->next->next->next = createNode(4);
    head->next->next->next->prev = head->next->next;

    // Display the initial doubly linked list
    displayList(head);

    // Delete a node at a random index (e.g., index 2)
    int indexToDelete = 2;
    deleteNodeAtIndex(&head, indexToDelete);

    // Display the updated doubly linked list
    displayList(head);

    return 0;
}
