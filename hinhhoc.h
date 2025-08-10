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
	/*
	hàm hủy - có tên trùng vs class thêm dấu ~ ở trc
	nó sẽ tự động đc khởi tạo khi đối tượng đó bị hủy/ bị giải phóng vùng nhớ (khi máy chạy xong hết hàm main)
	input: ko có input
	output: ko có output
	*/
	~hinh_chu_nhat_s();
};


class hinh_vuong_s
{
public:
	int canh;

	int tinh_dien_tich();
	int tinh_chu_vi();
};

class phan_so
{
public:
	int tu_so;
	int mau_so;
	phan_so();
	phan_so phan_so::operator*(phan_so khac);
};