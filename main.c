#include"header.h"
#include"linked_list.h"
#include"ringbuffer.h"

typedef union
{
    unsigned short val;
    unsigned char byte[2];

}union_t;

int main() 
{
    /*
    union_t u1;
    u1.val = 0x1234;
    printf("low byte: %c\n", u1.byte[0]);
    printf("high byte: %c\n", u1.byte[1]);
*/
    FILE* file = fopen("C:\\Users\\THINKPAD\\Downloads\\audio.wav", "rb");
    if (!file) {
        printf("Không thể mở file.\n");
        return 1;
    }

    // Đọc header để lấy sample rate
    fseek(file, 24, SEEK_SET);  // offset đến sample rate
    uint32_t sampleRate;
    fread(&sampleRate, sizeof(uint32_t), 1, file);

    // Lấy kích thước file
    fseek(file, 40, SEEK_SET);
    uint32_t dataSize;
    fread(&dataSize, sizeof(uint32_t), 1, file);

    fclose(file);

    printf("Kich thuoc du lieu : %u bytes\n", dataSize);
    printf("Sample rate: %u Hz\n", sampleRate);
    
    return 0;
}
