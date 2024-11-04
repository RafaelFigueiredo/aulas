// C program to insert a node in AVL tree
#include <stdio.h>
#include <stdlib.h>
#include "avl.h"


/* Driver program to test above function*/
int main()
{
    struct Node *root = NULL;

    /* Constructing tree given in the above figure */
    root = insertNode(root, 6);
    root = insertNode(root, 5);
    root = insertNode(root, 4);
    root = insertNode(root, 7);
    root = insertNode(root, 3);
    root = insertNode(root, 5);

    printf("inOrder traversal: ");
    inOrder(root);

    return 0;
}