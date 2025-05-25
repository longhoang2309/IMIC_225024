
#include<stdio.h>
void main() {
	unsigned int local = 0;
	printf("nhap diem: ");
	scanf_s("%d", &local);
	if (local >= 8) {
		printf("Gioi");
	}
	else if(8> local >= 6.5 ){
		printf("Kha");
	}
	else if (6.5 > local >= 5) {
		printf("Trung Binh");
	}
	else{
		printf("Yeu");
	}
	
}