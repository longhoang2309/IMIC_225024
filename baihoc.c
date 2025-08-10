typedef union
{
    unsigned short val;
    unsigned char byte[2];

}union_t;
int inbytecaothap() {
    union_t u1;
    u1.val = 0x1234;
    printf("low byte: %c\n", u1.byte[0]);
    printf("high byte: %c\n", u1.byte[1]);
    return 0;
}
