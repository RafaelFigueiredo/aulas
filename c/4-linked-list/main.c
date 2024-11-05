#include <stdio.h>
#include "linked_list.h"

  
// Main function
int main() {
    struct Node* head = createNode(1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 5);
    insertNode(head, 4);
    printf("In-order traversal of the binary tree: ");
    printList(head);
    printf("\n");

    swap_value(head);
    printList(head);
    printf("\n");
    
    head = swap_ptr(head);
    printList(head);
    return 0;
}
