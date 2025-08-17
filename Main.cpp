#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include<array>
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
		if((i<0)||((i>= so_luong))
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
	int limit;
	kieu_du_lieu* dia_chi;

	mang_co_dan()
	{
		so_luong = 0;
		limit = 1;
		dia_chi = (kieu_du_lieu*)calloc(so_luong, sizeof(kieu_du_lieu));
	}
	kieu_du_lieu& operator[](int i)
	{
		if ((i < 0) || ((i >= so_luong))
			throw runtime_error("vuot qua kich thuoc mang");
			return dia_chi[i];
	}
	~mang_co_dan()
	{
		free[] dia_chi;
	}
	void tang_limit(int limt_moi)
	{
		if (limit_moi <= limit) 
			return;

		kieu_du_lieu* moi = new kieu_du_lieu[limit_moi];
		for (int i = 0; i < so_luong; i++)
			moi[i] = dia_chi[i];

		delete[] dia_chi;
		dia_chi = moi;
		limit = limit_moi;
	}
	void thay_doi_kich_thuoc(int kich_thuoc_moi);
	{
		if (kich_thuoc_moi > limit)
			tang_limit(kich_thuoc_moi);

		so_luong = kich_thuoc_moi;
	}
};

int main()
{
	mang<int, 3> a;
	array<int, 3> b;
	return 0;
}
