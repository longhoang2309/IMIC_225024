
#include<stdio.h>
#include<string.h>
void main() {

		int x = 0;
		int tong = 0;
		printf("nhap so nguyen: ");
		scanf_s("%d", &x);
		for (int i = 0; i <= x; i++) {
			tong = tong + i;
		}
		printf("tong la: %d", tong);
}
