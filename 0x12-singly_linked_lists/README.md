# 0x12. C - Singly linked lists
A singly linked list in C is a data structure used for organizing a collection of elements, known as nodes, where each node contains two parts: the data (the value or payload) and a reference (or pointer) to the next node in the sequence. Unlike arrays, singly linked lists do not have a fixed size, and elements can be dynamically added or removed. This makes them a flexible data structure for various applications.

Here's a basic implementation of a singly linked list in C:

```c
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the list
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to print the elements of the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the memory allocated for the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL; // Initialize an empty linked list

    // Append some elements to the linked list
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free the memory used by the linked list
    freeList(head);

    return 0;
}
```

In this implementation:

1. We define a `struct Node` to represent each node in the linked list, containing an integer `data` field and a pointer `next` to the next node in the list.

2. The `createNode` function is used to create a new node with the given data.

3. The `append` function is used to add a new node to the end of the list.

4. The `printList` function prints the elements of the linked list.

5. The `freeList` function deallocates the memory used by the linked list to prevent memory leaks.

6. In the `main` function, we create a linked list, append some elements, print the list, and then free the memory.
