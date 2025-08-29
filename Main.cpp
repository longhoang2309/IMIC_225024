#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include<array>
#include<string.h>
#include<vector>
using namespace std;
struct phan_so
{
	int tu;
	int mau;
};

template <class kieu_du_lieu, int so_phan_tu>
class mang
{
public:
	int so_luong;
	kieu_du_lieu* dia_chi;
	mang()
	{
		so_luong = so_phan_tu;
		dia_chi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
	}

	kieu_du_lieu& operator[](int i)
	{
		if ((i < 0) || (i >= so_luong))
			throw runtime_error("vuot qua kich thuoc mang");
		return dia_chi[i];
	}
	~mang()
	{
		free(dia_chi);
	}
};
template <class kieu_du_lieu, int so_phan_tu>
class mang_co_dan
{
public:
	int so_luong;
	kieu_du_lieu* dia_chi;

	mang_co_dan()
	{
		so_luong = so_phan_tu;
		dia_chi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
	}
	kieu_du_lieu& operator[](int i)
	{
		if ((i < 0) || (i >= so_luong))
			throw runtime_error("vuot qua kich thuoc mang");
		return dia_chi[i];
	}
	
	
	void thay_doi_kich_thuoc(int so_luong_moi)
	{
		kieu_du_lieu* vung_nho_moi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
		if(vung_nho_moi == NULL)
			throw runtime_error("qua tri cap nhap memory bi loi");
		int kich_thuoc_min = (so_luong_moi < so_luong) ? so_luong_moi : so_luong;

		memcpy(vung_nho_moi, dia_chi, kich_thuoc_min * sizeof(kieu_du_lieu));
		free(dia_chi);
		dia_chi = vung_nho_moi;
		so_luong = so_luong_moi;

	}
	~mang_co_dan()
	{
		free(dia_chi);
	}
};
template<class kieu_du_lieu, int so_phan_tu>
void sap_xep(mang_co_dan<kieu_du_lieu, so_phan_tu>& arr)
{
	for (int i = 0; i < arr.so_luong - 1; i++) {
		for (int j = i + 1; j < arr.so_luong; j++) {
			if (arr[i] > arr[j]) {
				kieu_du_lieu tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
int function(int x, char y) {
	printf("x= %d, y = %d\n", x, y);
	return 0x1234;
}
/*
tên hàm, đại diện địa chỉ bắt đầu hàm
con trỏ hàm, cú pháp:
int function(int x, char y) {
	printf("x= %d, y = %d\n", x, y);
	return 0x1234;
}
nhận xét: function có
	output: là int
	intput: int x, char y

int (*ten_con_tro_ham)(int,char)
*/
int main()
{
	/*mang_co_dan<int, 3> a;
	a.thay_doi_kich_thuoc(4);
	try {
		a[3] = 1;
	}
	catch (exception E)
	{
		printf("o day co loi: %s\n", E.what());
	}

	vector <int> b(3);
	b.resize(4);*/
	printf("function: %p\n", function);
	int (*pf)(int, char); //khai báo con trỏ chứ địa chỉ của hàm, có output là int,char
	pf = function;// sử dụng con trỏ hàm pf để chứa địa chỉ của hàm function
	pf(1, 2);//khởi chạy hàm, có địa chỉ đc lưu trong con trỏ hàm pf
	//VIẾT	HÀM SẮP XẾP GIÁ TRỊ MẢNG
	mang_co_dan<int, 3> a;
	a[0] = 3;
	a[1] = 2;
	a[2] = 5;

	cout << "Truoc khi sap xep: ";
	for (int i = 0; i < a.so_luong; i++)
		cout << a[i] << " ";
	cout << endl;

	a.thay_doi_kich_thuoc(5);
	a[3] = 9;
	a[4] = 1;

	sap_xep(a);

	cout << "Sau khi sap xep: ";
	for (int i = 0; i < a.so_luong; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
