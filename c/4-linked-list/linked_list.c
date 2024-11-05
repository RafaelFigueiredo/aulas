#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

// Create a new node
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert a node into the tree
void insertNode(struct Node* head, int data){
    struct Node* current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = createNode(data);
}

// In-order traversal to print the tree
void printList(struct Node* head){
    struct Node* current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}

void swap_value(struct Node* head){
    struct Node* current_node = head;
    struct Node* next = current_node->next;
    if(next == NULL){
        return;
    }
    int old_data = current_node->data;
    current_node->data = next->data;
    next->data = old_data;

}
struct Node* swap_ptr(struct Node* head){
    // 7 3 2
    struct Node* old_head = head; //7
    struct Node* old_next = old_head->next; //3
    if(old_next == NULL){
        return old_head;
    }
    struct Node* tail = old_next->next; // 2 -> NULL
    struct Node* new_head = old_next;   // 3
    new_head -> next = old_head;        // 3 -> 7
    old_head -> next = tail;            // 7 -> 2 -> NULL
    
    return new_head;
}
