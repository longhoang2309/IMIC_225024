#include"header.h"




/*typedef struct
{
    int tu_so;
    int mau_so;
}phan_so_t;
*/

/*typedef struct
{
    char ten[30]; // or char* ten;
    int diem_toan;
    int diem_van;
}hoc_sinh;

void print_struct(hoc_sinh* arr, int n)
{

    float avg_best = 0;
    int thu_tu_cao_nhat = 0;
    for (int i = 0; i < n; i++)
    {
        float avg = (arr[i].diem_toan + arr[i].diem_van) / 2;
        if (avg > avg_best)
        {
            thu_tu_cao_nhat = i;
            avg_best = avg;
        }
    }
    printf("%s co diem trung binh cao nhat (%.2f)\n", arr[thu_tu_cao_nhat].ten, avg_best);
}*/

void main() 
{
    phan_so_t c = { 2,3 };
    phan_so_t d = { 3,2 };
    tru_phan_so(c,d);
    return 0;
}
