#include <stdio.h>
#include "heap.h"
  
int main() {
    Heap* heap = heap_new(2);
    for (int i = 9; i >= 0; i--)
    {
        heap_push(heap, i);
        heap_print(heap);
        printf("\n");
    }

    for (int i = 9; i >= 0; i--)
    {
        int v = heap_pop(heap);
        printf("%d ", v);
        heap_print(heap);
        printf("\n");
    }

    
    
    return 0;
}
