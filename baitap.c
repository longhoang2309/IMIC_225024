#include"toan.h"

/*
	BÀI 1:
	chức năng:	Tính tổng của n số nguyên đầu tiên
	input:
		- int so_nguyen
	output:
		_ int ketqua
*/
int tong_so_nguyen(int so_nguyen) {
	int ketqua = 0;
	for (int i = 0; i <= so_nguyen; i++) {
		ketqua += i;
	}
	return ketqua;
}

/*
	BÀI 2:
	chức năng:	Tính giai thừa của của một số tự nhiên
	input:
		- int so_tu_nhien
	output:
		_ int ketqua
*/
int giai_thua(int so_tu_nhien) {
	int ketqua = 1;
	for (int i = so_tu_nhien; i > 0; i--) {
		ketqua *= i;
	}
	return ketqua;
}

/*void nhap_so() {
	int n = 0;
	do {

	} while (n != 0);
}
*/
/*
	BÀI 4:
	chức năng:	Tính tiền gửi ngân hàng sau n năm
	input:
		- float tien_ban_dau
	output:
		không có - void
*/
float tinh_tien_lai(float tien_ban_dau, int so_nam) {
	float ketqua = 0.0;
	float lai_1_nam = 0.0;
	lai_1_nam = tien_ban_dau * (1 + 0.082);
	for (int i = 0; i <= so_nam; i++) {
		ketqua *= ketqua;
	}
	return ketqua;
}

/*
	BÀI 5:
	chức năng:	In ra các số nguyên tố nhỏ hơn n
	input:
		- float tien_ban_dau
	output:
		không có - void

void so_nguyen_to(int n) {
	int ketqua = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 2; j < n - 1; i++) {
			if (n % i == 0) {
				break;
			}
			printf("%d", n);
		}
	}
}
*/