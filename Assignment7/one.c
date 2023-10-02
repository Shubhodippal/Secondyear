#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the first node of the linked list
void deleteFirstNode(struct Node** head) {
    // Check if the list is empty
    if (*head == NULL) {
        printf("The list is empty. Cannot delete.\n");
        return;
    }

    // Store the reference to the current head
    struct Node* temp = *head;

    // Update the head to the next node
    *head = (*head)->next;

    // Free the memory of the previous head
    free(temp);
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
    for (int i = 5; i >= 1; i--) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    printf("Original Linked List: ");
    printLinkedList(head);

    // Delete the first node
    deleteFirstNode(&head);

    printf("Linked List after deleting the first node: ");
    printLinkedList(head);

    // Free the memory of the remaining nodes
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
