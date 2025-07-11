#pragma once
#include <stdint.h>
#include <stdbool.h>

typedef struct {
    int* buffer;        // Vùng nhớ chứa dữ liệu
    int capacity;       // Tổng số phần tử có thể chứa
    int free_slots;     // Số phần tử còn trống
    int write_index;    // Vị trí ghi
    int read_index;     // Vị trí đọc
} RingBuffer;

void CreateRingBuffer(RingBuffer* rb, int capacity);
int  PutItemToRingBuffer(RingBuffer* rb, int item);
int  GetItemFromRingBuffer(RingBuffer* rb, int* out_item);
void DeleteRingBuffer(RingBuffer* rb);