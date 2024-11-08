#ifndef HEAP_H
#define HEAP_H

typedef struct Heap
{
    int *data;  // pointer to array
    int cap;    // array size
    int len;    // items in the array
} Heap;


// allocates a new Heap in memory and returns a pointer.
Heap    *heap_new(int cap);

// adds an item to the Heap
void    heap_push(Heap *heap, int v);

// remove the first element from the Heap
int     heap_pop(Heap *heap);

// prints the heap data
void    heap_print(Heap *heap);

// internal function to grow the heap when needed
void    _heap_grow(Heap *heap);



#endif