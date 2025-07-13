#include"header.h"
#include"linked_list.h"
#include"ringbuffer.h"




RingBuffer rb;
int main() 
{
    CreateRingBuffer(&rb, 3);
    PutItemToRingBuffer(&rb, 12);
    PutItemToRingBuffer(&rb, 10);

    return 0;
}
