#include"header.h"
#include"linked_list.h"



/*
typedef struct
{
    int tu_so;
    int mau_so;
}phan_so_t;

typedef struct
{
    char ten[30]; // or char* ten;
    int diem_toan;
    int diem_van;
}hoc_sinh;
*/

linked_list_t ll_1;
linked_list_t ll_2;
int main() 
{
    create_linked_list(&ll_1);
    add_node(&ll_1, 5);
    insert_node(&ll_1, 2, 2);
    int x = Get_Value_Index(&ll_1, 1);
    
    printf("%d", x);
    return 0;
}
