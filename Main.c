#include"header.h"
#include <stdlib.h>

struct phan_so
{
    int tu_so;
    int mau_so;
};

void main() 
{
    struct phan_so A;
    struct phan_so B;
    struct phan_so C;

    A.tu_so = 1;
    A.mau_so = 2;

    B.tu_so = 2;
    B.mau_so = 3;

    C.tu_so = A.tu_so * B.tu_so;
    C.mau_so = A.mau_so * B.mau_so;
    return 0;
}
