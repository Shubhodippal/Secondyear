#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node at a given index in the linked list
void deleteNodeAtIndex(struct Node** head, int index) {
    // Check if the list is empty
    if (*head == NULL) {
        printf("The list is empty. Cannot delete.\n");
        return;
    }

    // If the index is 0, delete the first node
    if (index == 0) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    // Traverse the list to find the node at the given index
    struct Node* current = *head;
    struct Node* prev = NULL;
    int currentIndex = 0;

    while (current != NULL && currentIndex != index) {
        prev = current;
        current = current->next;
        currentIndex++;
    }

    // If the index is out of range, do nothing
    if (currentIndex != index) {
        printf("Index out of range. Cannot delete.\n");
        return;
    }

    // Update the next pointer of the previous node to skip the current node
    prev->next = current->next;

    // Free the memory of the deleted node
    free(current);
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert some elements into the linked list
    for (int i = 1; i <= 5; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    printf("Original Linked List: ");
    printLinkedList(head);

    int indexToDelete = 2; // Change this to the desired index

    // Delete a node at the specified index
    deleteNodeAtIndex(&head, indexToDelete);

    printf("Linked List after deleting index %d: ", indexToDelete);
    printLinkedList(head);

    // Free the memory of the remaining nodes
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
