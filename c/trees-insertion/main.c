#include <stdio.h>
#include "tree.h"

  
// Main function
int main() {
    struct Node* root = NULL;
    root = insertNode(root, 6);
    insertNode(root, 5);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 3);
    insertNode(root, 5);

    printf("In-order traversal of the binary tree: ");
    inOrderTraversal(root);
    printf("\n");

    int result = sum(root);
    printf("sum result: %d", result);
    return 0;
}
