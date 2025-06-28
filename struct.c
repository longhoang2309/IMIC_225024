#include"header.h"

/*
1. xây dựng kiểu dữ liệu mới để mô tả đổi tượng là phân số
2. viết hàm nhân 2 phân số
3. viêt hàm chia 2 phân số
4. viết hàm cộng 2 phân số
5. viết hàm trừ 2 phần số
6. viết hàm rút gọn 2 phân số
*/

void nhan_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t c = { 0,0 };
    c.tu_so = a.tu_so * b.tu_so;
    c.mau_so = a.mau_so * b.mau_so;
    printf("ket qua: tu so = %d, mau so = %d",c.tu_so,c.mau_so);
}

void chia_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t c = { 0,0 };
    c.tu_so = a.tu_so * b.mau_so;
    c.mau_so = a.mau_so * b.tu_so;
    printf("ket qua: tu so = %d, mau so = %d", c.tu_so, c.mau_so);
}

void cong_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t c = { 0,0 };
    if (a.mau_so == b.mau_so)
    {
        c.tu_so = a.tu_so + b.tu_so;
        c.mau_so = a.mau_so;
    }
    else
    {
        c.tu_so = (a.tu_so * b.mau_so) + (b.tu_so * a.mau_so);
        c.mau_so = a.mau_so * b.mau_so;
    }
    printf("ket qua: tu so = %d, mau so = %d", c.tu_so, c.mau_so);
}

void tru_phan_so(phan_so_t a, phan_so_t b)
{
    phan_so_t c = { 0,0 };
    if (a.mau_so == b.mau_so)
    {
        c.tu_so = a.tu_so - b.tu_so;
        c.mau_so = a.mau_so;
    }
    else
    {
        c.tu_so = (a.tu_so * b.mau_so) - (b.tu_so * a.mau_so);
        c.mau_so = a.mau_so * b.mau_so;
    }
    printf("ket qua: tu so = %d, mau so = %d", c.tu_so, c.mau_so);
}

int ucln(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rut_gon(phan_so_t* a)
{
    if (a->mau_so == 0) {
        printf("Error: Mau so phai khac 0!\n");
        return;
    }

    int gcd = ucln(a->tu_so, a->mau_so);

    a->tu_so /= gcd;
    a->mau_so /= gcd;

    // Đưa dấu âm về tử số (nếu cần)
    if (a->mau_so < 0) 
    {
        a->tu_so = -a->tu_so;
        a->mau_so = -a->mau_so;
    }
}

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------- //

/*
1. scan từ bàn phím n.sao đó nhập n học sinh
2. viết hàm in ra màn hình danh sách n học sinh này
3. viết hàm in ra học sinh có điểm trung bình cao nhất
4. viết hàm sắp xếp danh sách học sinh theo điểm trung bình từ cao đến thấp

học sinh :
tên
tuổi
gioi tinh
điểm toán
điểm văn

điểm trung bình = (điểm toán + điểm văn) / 2
*/

void scan_hs(hoc_sinh hs_arr[], int so_hs)
{
    for (int i = 0; i < so_hs; i++) 
    {
        printf("\nNhap thong tin cua hoc sinh %d:\n", i + 1);
        printf("Ten: ");
        scanf("%s", hs_arr[i].ten);

        printf("Tuoi: ");
        scanf("%d", hs_arr[i].tuoi);

        printf("Gioi Tinh: ");
        scanf("%s", hs_arr[i].gioi_tinh);

        printf("Diem Toan: ");
        scanf("%f", hs_arr[i].diem_toan);

        printf("Diem Van: ");
        scanf("%f", hs_arr[i].diem_van);
    }
}

void print_list_hs(hoc_sinh hs_arr[], int so_hs)
{
    printf("\n=== Danh Sach Hoc Sinh ===\n");
    for (int i = 0; i < so_hs; i++) {
        float avg = (hs_arr[i].diem_toan + hs_arr[i].diem_van) / 2;
        printf("Hoc sinh %d:\n", i + 1);
        printf("Ten: %s\n", hs_arr[i].ten);
        printf("Tuoi: %d\n", hs_arr[i].tuoi);
        printf("Toan: %.2f, Van: %.2f, Trung binh: %.2f\n", hs_arr[i].diem_toan, hs_arr[i].diem_van, avg);
        printf("---------------------------\n");
    }
}

void print_trung_binh_best(hoc_sinh* arr, int n)
{
    float trung_binh_best = 0;
    int thu_tu_cao_nhat = 0;
    for (int i = 0; i < n; i++)
    {
        float trung_binh = (arr[i].diem_toan + arr[i].diem_van) / 2;
        if (trung_binh > trung_binh_best)
        {
            thu_tu_cao_nhat = i;
            trung_binh_best = trung_binh;
        }
    }
    printf("%s co diem trung binh cao nhat (%.2f)\n", arr[thu_tu_cao_nhat].ten, trung_binh_best);
}

/*
void xep_loai_hs()
{
    return;
}
*/