#include"header.h"

/*
6. Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên
Đề bài: Nhập vào 2 số nguyên A, B. in ra màn hình ước số chung lớn nhất của A và B

7. Viết chương trình tính tích phân của f(x) = x^2. từ a đến b theo phương pháp hình than với tần số lấy mẫu 1000 lần
Đề bài: Nhập vào 2 số nguyên a, b. in ra màn hình kết quả của tích phân hàm f(x) trong khoảng từ a đến b.

8. Viết chương trình tính thuế thu nhập cá nhân.

9. Viết chương trình mô phỏng việc trả tiền của máy ATM.
số tiền nhập vào phải là bội số của 50000. số tiền phải trả về đầy đủ các mệnh giá từ 50000 đến 500000
In ra số lượng tờ tiền được rút.
VD: người dùng nhập vào 1000000.
In ra:
2 x 50000
2 x 100000
1 x 200000
1 x 500000

10. viết chương trình in ra cách đọc số bằng chữ.
VD: nhập vào 1234 in ra "mot ngan hai tram ba muoi bon"
*/
/*
1. tính tổng của n số nguyên đầu tiên,
cho số tự nhiên n nhập từ bàn phím hãy viết chương trình in ra tổng của n số tự nhiên đầu tiên sử dụng vòng lặp
1.1: Chỉ cộng số chẵn
*/
int tong_so_nguyen(int so_nguyen) 
{
	int ketqua = 0;
	for (int i = 0; i <= so_nguyen; i++) 
	{
		if (i % 2 == 0)
		{
			ketqua += i;
		}
	}
	return ketqua;
}

/*
2. Tính giai thừa của một số tự nhiên
Cho một số tự nhiên n nhập từ bàn phím, viết chương trình in ra màn hình giai thừa của số vừa nhập có sử dụng vòng lặp.
*/
int giai_thua(int so_tu_nhien)
{
	int ketqua = 1;
	for (int i = so_tu_nhien; i > 0; i--) 
	{
		ketqua *= i;
	}
	return ketqua;
}


/*
3. Nhập số vào màn hình cho đến khi nhập số 0 thì dừng
Đề bài: Nhập vào một số cho đến khi ta nhập số 0 thì dừng chương trình.
3.1: neu nhap sai qua 5 thi thoat chuong trinh
*/
void nhap_so()
{
	int x = 1;
	int count = 0;
	for (int count = 0; count <=5; count++)
	{
		if(x != 0)
		{
			scanf("%d", &x);
		}
		else
		{
			break;
		}
	}
}

/*
4. Tính tiền gửi ngân hàng sau n năm
Đề bài: Nhập vào số tiền gửi ban đầu, tiền lãi mỗi năm và số năm gửi tiền hãy tính số tiền nhận được sau n năm (biết lãi tính theo hình thức lãi kép). Biết lãi hiện tại của Viettinbank là 8.2%/năm
*/
float tinh_tien_lai(float tien_ban_dau, int so_nam) 
{
	float ketqua = 0.0;
	float lai_1_nam = 0.0;
	lai_1_nam = tien_ban_dau * (1 + 0.082);
	for (int i = 0; i <= so_nam; i++) {
		ketqua *= ketqua;
	}
	return ketqua;
}

/*
5. In ra các số nguyên tố nhỏ hơn n
Đề bài: Nhập vào một số tự nhiên n bất kì, in ra màn hình các số nguyên tố nhỏ hơn n theo thứ tự tăng dần (sử dụng vòng lặp)
*/

void so_nguyen_to(int n)
{
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
