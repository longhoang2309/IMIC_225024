#include<stdio.h>
#include"hinhhoc.h"

int main()
{
	phan_so A;
	A.tu_so = 5;
	A.mau_so = 2;
	phan_so B;
	B.tu_so = 3;
	B.mau_so = 3;
	
	A.nhan_phan_so(&B);
	A.in_phan_so();
}
