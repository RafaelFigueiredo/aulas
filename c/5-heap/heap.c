#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "heap.h"

Heap* heap_new(int cap){
    Heap* newHeap = (Heap*)malloc(sizeof(Heap));
    newHeap->data = (int*)malloc(cap * sizeof(int));    
    newHeap->cap = cap;
    newHeap->len = 0;
    return newHeap;
}

void heap_fix_down(int *arr, int len){
    int idx = 0;
    int max_idx = len-1;
    while(idx < max_idx){
        int left_idx = 2*idx + 1;
        int right_idx = 2*idx + 2;

        if(left_idx > max_idx && right_idx > max_idx){
            break;
        }

        if(left_idx < max_idx && right_idx > max_idx){
            int tmp = arr[idx];
            arr[idx] = arr[left_idx];
            arr[left_idx] = tmp;
            idx = left_idx;
            continue;
        }
        if(left_idx > max_idx && right_idx < max_idx){
            int tmp = arr[idx];
            arr[idx] = arr[right_idx];
            arr[right_idx] = tmp;
            idx = right_idx;
            continue;
        }

        if(arr[left_idx] < arr[right_idx]){
            int tmp = arr[idx];
            arr[idx] = arr[left_idx];
            arr[left_idx] = tmp;
            idx = left_idx;
        }else{
            int tmp = arr[idx];
            arr[idx] = arr[right_idx];
            arr[right_idx] = tmp;
            idx = right_idx;
        }
    }
}
void heap_fix_up(int *arr, int len){
    int idx = len -1;
    while(idx > 0){
        int parentIdx = (idx -1) / 2;
        if(arr[idx] < arr[parentIdx]){
            int tmp = arr[idx];
            arr[idx] = arr[parentIdx];
            arr[parentIdx] = tmp;
        }
        idx = parentIdx;
    }
}

void heap_push(Heap* heap, int v){
    if(heap->cap == heap->len){
    _heap_grow(heap);
    }
    heap->data[heap->len] = v;
    heap->len++;
    heap_fix_up(heap->data, heap->len);
}
int heap_pop(Heap* heap){
    int v = heap->data[0];
    heap->data[0] = heap->data[heap->len-1];
    heap->len--;
    heap_fix_down(heap->data, heap->len);
    return v;
}

void _heap_grow(Heap* heap){
    int newCap = 2 * heap->cap;
    int *tmp = (int*)malloc(heap -> cap * sizeof(newCap));
    for(int i=0; i<heap->cap; i++){
        tmp[i] = heap->data[i];
    }
    free(heap->data);
    heap->data = tmp;
    heap->cap = newCap;
}

void heap_print(Heap* heap){
    printf("Heap<[");
    for (int i = 0; i < heap->len; i++)
    {
        printf("%d", heap->data[i]);
        if(i < heap->len-1){
            printf(",");
        }
    }
    printf("]>");
}