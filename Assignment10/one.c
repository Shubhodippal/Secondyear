#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE]; // Stack array
int top = -1;        // Initialize top of stack to -1

// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push.\n");
    } else {
        stack[++top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow. Cannot pop.\n");
        return -1; // Return a sentinel value indicating an error
    } else {
        int poppedValue = stack[top--];
        return poppedValue;
    }
}

// Function to check if the stack is empty
int isEmpty() {
    return (top == -1);
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack is not empty.\n");
    }

    return 0;
}
