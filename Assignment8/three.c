#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to insert a node at the specified index
struct Node* insertAtIndex(struct Node* head, int data, int index) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    // If the list is empty or the index is 0, make the new node as the head
    if (head == NULL || index == 0) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    } else {
        // Traverse the list to find the node at the specified index
        struct Node* current = head;
        int currentIndex = 0;
        while (current != NULL && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        // If the index is out of bounds, return the original list
        if (current == NULL) {
            printf("Index out of bounds. Node not inserted.\n");
            free(newNode);
            return head;
        }

        // Update pointers to insert the new node at the specified index
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
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

    // Insert nodes at random indices
    head = insertAtIndex(head, 1, 0); // Insert at index 0
    head = insertAtIndex(head, 3, 1); // Insert at index 1
    head = insertAtIndex(head, 2, 1); // Insert at index 1

    // Print the updated list
    printList(head);

    return 0;
}
