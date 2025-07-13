#include "ringbuffer.h"
#include <stdlib.h>
#include <stdio.h>

// 1. Khởi tạo RingBuffer
void CreateRingBuffer(RingBuffer* rb, int capacity) {
    rb->buffer = (int*)malloc(sizeof(int) * capacity);
    if (rb->buffer == NULL) {
        rb->capacity = 0;
        rb->free_slots = 0;
        return;
    }

    rb->capacity = capacity;
    rb->free_slots = capacity;
    rb->write_index = 0;
    rb->read_index = 0;
}

// 2. Thêm item vào RingBuffer
int PutItemToRingBuffer(RingBuffer* rb, int item) {
    if (rb->free_slots == 0) {
        printf("Ring buffer is full\n");
        return -1; 
    }

    rb->buffer[rb->write_index] = item;
    rb->write_index = (rb->write_index + 1) % rb->capacity;
    rb->free_slots--;
    return 0; 
}

// 3. Lấy item ra khỏi RingBuffer
int GetItemFromRingBuffer(RingBuffer* rb, int* out_item) {
    if (rb->free_slots == rb->capacity) {
        printf("Ring buffer is empty\n");
        return -1; 
    }

    *out_item = rb->buffer[rb->read_index];
    rb->read_index = (rb->read_index + 1) % rb->capacity;
    rb->free_slots++;
    return 0; 
}

// 4. Xoá RingBuffer
void DeleteRingBuffer(RingBuffer* rb) {
    if (rb->buffer != NULL) {
        free(rb->buffer);
        rb->buffer = NULL;
    }

    rb->capacity = 0;
    rb->free_slots = 0;
    rb->write_index = 0;
    rb->read_index = 0;
}