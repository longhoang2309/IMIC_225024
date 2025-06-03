#define _CTR_SECURE_NO_WARNINGS
#include<stdio.h>
#include"toan.h"
int tong_array() {
	int arr[10];
	int x = 0;
	int ketqua = 0;
	for (int i = 0; i < 10; i++) {
		printf("please enter a number: ");
		scanf("%d", &x);
		arr[i] = x;
		ketqua += x;
	}
	return ketqua;
}

void main() {
	tong_array;
}
