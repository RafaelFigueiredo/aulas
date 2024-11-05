#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data);

// Insert a node into the tree
void insertNode(struct Node* head, int data);

// In-order traversal to print the tree
void printList(struct Node* head);

void swap_value(struct Node* head);
struct Node* swap_ptr(struct Node* head);