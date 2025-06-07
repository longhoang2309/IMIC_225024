#include"header.h"

//Bài 1: Xây dựng hàm.tính tổng các giá trị trong mảng arr
void tong_array()
{
	int arr[10] = { 0 };
	int ketqua = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("please enter a number: ");
		scanf("%d", &arr[i]);
		ketqua += arr[i];
	}
	printf("%d", ketqua);
}

//Bai 2 : Tính trung bình cộng của các số lẻ trong mảng arr
void odd_avg()
{
    int arr[100], n;
    int sum = 0, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) 
        {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) 
    {
        printf("There are no odd numbers in the array.\n");
    }
    else 
    {
        float average = (float)sum / count;
        printf("Average of odd numbers: %.2f\n", average);
    }
}

//Bai 3 : In vị trí của số lớn nhất trong mảng arr
void largest_num()
{
    int arr[100], n;
    int largest = 0, position = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (largest < arr[i]) 
        {
            largest = arr[i];
            position = i;

        }
    }
    printf("The largest number is: %d, and its position in the array is: %d\n", largest, position);
}

//Bai 4 : Thay thế các số âm trong mảng arr bằng 0
void negative_replace()
{
    int arr[100], n;
    int largest = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    printf("Array elements: ");
    for (int j = 0; j < n; j++) 
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

//Bài 5 : Xây dụng hàm.in ra các giá trị LẼ trong mảng arr
void print_odd()
{
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The odd numbers in the array are: ");
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 != 0)
        {
            printf("%d ", arr[j]);
        }   
    }
    printf("\n");
}

//Bài 6 : Xây dụng hàm.in ra các giá trị là số nguyên tố trong mảng arr
void print_prime()
{
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("The prime numbers are: ");
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 2)
            continue;
        for (int k = 2; k * k <= arr[k]; k++)
        {
            if (arr[j] % k == 0)
                break;
            printf("%d ", arr[j]);
        }
    }
    printf("\n");
}

//Bài 7 : Xây dựng hàm.in ra giá trị lớn nhất trong mảng arr
void print_largest()
{
    int arr[100], n;
    int largest = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n", largest);
}

//Bai 8 : Viet Ham Hoan Vi 2 so nguyen
void swap_num(int a, int b)
{   
    int temp = a;
    a = b;
    b = temp;
    printf("1st int = %d, 2nd int = %d", a, b);
}

//Bài 9 : Xây dựng hàm.Sắp xếp mảng arr theo giá trị tăng dần
void small_to_large()
{
    int arr[100], n;
    int largest = 0, position = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted in ascending order:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}