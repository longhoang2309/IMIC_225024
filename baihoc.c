#include"toan.h"
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