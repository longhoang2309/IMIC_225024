#include"header.h"

/*
nhập từ bàn phím số lượng trong arr
sau đó nhập giá trị của từng phần tử
in tổng của các phần tử trong arr
*/

int arr_sum()
{
    int arr[100];
    int n = 0;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    return sum;
}
void main() 
{
    printf("%d", arr_sum());
}
