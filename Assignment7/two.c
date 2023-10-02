#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the last node of the linked list
void deleteLastNode(struct Node** head) {
    // Check if the list is empty
    if (*head == NULL) {
        printf("The list is empty. Cannot delete.\n");
        return;
    }

    // If there is only one node, delete it
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    // Traverse the list to find the last and second-to-last nodes
    struct Node* current = *head;
    struct Node* prev = NULL;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    // Update the next pointer of the second-to-last node to NULL
    prev->next = NULL;

    // Free the memory of the last node
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

    // Delete the last node
    deleteLastNode(&head);

    printf("Linked List after deleting the last node: ");
    printLinkedList(head);

    // Free the memory of the remaining nodes
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
