/*
	chức năng:	sử dụng hàm printf để tính xếp loại hs theo điểm trung bình
	input:
		- float điểm_trung_bình
	output:
		không có - void
*/
#include<stdio.h>
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