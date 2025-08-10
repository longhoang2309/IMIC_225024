#include <stdio.h>

class hinh_chu_nhat_s
{
public:
	int dai;
	int rong;

	int tinh_dien_tich();
	int tinh_chu_vi();

	/*
	hàm tạo - có tên trùng vs class
	input: có thể có input
	output: ko có output
	*/
	hinh_chu_nhat_s();
	
};


class hinh_vuong_s
{
public:
	int canh;

	int tinh_dien_tich();
	int tinh_chu_vi();
};