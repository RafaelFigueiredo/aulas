#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int data);

// Insert a node into the tree
struct Node* insertNode(struct Node* root, int data);

// In-order traversal to print the tree
void inOrderTraversal(struct Node* root);