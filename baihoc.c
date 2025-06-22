#include"header.h"
/*
	Chức năng: tính tổng
	input:
		int a, int b
	output:
		int tổng của a và b
*/
int tong(int a, int b) {
	int ketqua = 0;
	ketqua = a + b;
	return ketqua;
}

/*
	Chức năng: tính tích
	input:
		int a, int b
	output:
		int tích của a và b
*/
int tich(int a, int b) {
	int ketqua = 0;
	for (int i = 0; i < b; i++) {
		ketqua = tong(ketqua, a);
	}
	return ketqua;
}
/*
	chức năng:	sử dụng hàm printf để tính xếp loại hs theo điểm trung bình
	input:
		- float điểm_trung_bình
	output:
		không có - void
*/
void xep_loai(float diem_trung_bình) {
	if (diem_trung_bình >= 8.0) {
		printf("loai GIOI\n");
	}
	else if (diem_trung_bình >= 6.5) {
		printf("loai KHA\n");
	}
	else if (diem_trung_bình >= 5) {
		printf("loai TRUNG BINH\n");
	}
	else {
		printf("loai YEU\n");
	}
}

/*
tính tổng cùa array
input: địa chỉ bắt đầu của mảng int* mảng
	số lượng phần tử của mảng int so_phan-tu
output: int
*/

int tong_arr(int* mang[], int so_phan_tu)
{
	int ketqua = 0;
	for (int i = 0; i < so_phan_tu; i++)
	{
		ketqua = ketqua + mang[i];
	}
	return ketqua;
}

