#include"header.h"

/*
Bài 1: Xây dụng hàm. dùng để điếm số ký tự trong chuỗi
*/

int so_phan_tu_str(char* str) {
    int phan_tu = 0;
    while (str[phan_tu] != 0) {
        phan_tu++;
    }
    return phan_tu;
}

/*
Bài 2: Xây dựng hàm. dùng để điếm có bao nhiêu ký tự space (dấu cách) trong chuỗi
*/
int space_num(char* str)
{
    int phan_tu = 0;
    int space_count = 0;
    while (str[phan_tu] != 0)
    {
        if (str[phan_tu] == 32)
        {
            space_count++;
        }
        phan_tu++;
    }
    return space_count;
}

/*
Bài 3: Xây dụng hàm, dùng để chuyễn chữ thường thành chư IN HOA
*/
void capitalize(char* str) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }
}

/*
Bài 4: Xây dựng hàm. dùng để điếm số từ (word) trong chuỗi
*/
int word_count(char* str)
{
    int phan_tu = 0;
    int word_count = 1;
    while (str[phan_tu] != 0)
    {
        if (str[phan_tu] == 32)
        {
            word_count++;
        }
        phan_tu++;
    }
    return word_count;
}

/*
Bài 5: Xây dụng hàm. dùng để in hoa chữ cái đầu tiên của từ trong chuỗi str
*/
void first_capital(char* str)
{
    int newWord = 1;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            if (newWord) 
            {
                str[i] = str[i] - 32; 
                newWord = 0;
            }
        }
        else if (str[i] == 32)
        {
            newWord = 1;
        }
        else 
        {
            newWord = 0;
        }
    }
}

/*
Bài 6: Xây dựng hàm. dùng để tìm ký tự c trong chuỗi str. hàm trả về địa chỉ của ký tự c trong chuỗi str
*/
char* c_count(char* str, char c)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return &str[i];
        }
    }
}

/*
bài 7: Xây dựng hàm. dùng để tìm chuỗi subStr trong chuỗi str. hàm trả về địa chỉ bất đầu của subStr trong chuỗi str
intput: char* str, char* substr
output: char* kq
*/

char* str_count(char* str, char* substr)
{
    char* kq = NULL;
    int i = 0;
    int j = 0;
    for (i = 0; i < so_phan_tu_str(str); i++)
    {
        for (j = 0; j < so_phan_tu_str(substr); j++)
        {
            if (str[i + j] != substr[j])
            {
                break;
            }
        }
        if (j == so_phan_tu_str(substr))
        {
            kq = &str[i];
            return kq;

        }
    }
    if (i >= so_phan_tu_str(str))
    {
        return NULL;
    }
}