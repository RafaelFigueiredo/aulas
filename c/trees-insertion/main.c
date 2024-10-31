#include <stdio.h>
#include "tree.h"

  
// Main function
int main() {
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("In-order traversal of the binary tree: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
