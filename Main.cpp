#include<stdio.h>
#include<iostream>
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
		return dia_chi[i];
	}
	~mang()
	{
		free(dia_chi);
	}
};


int main()
{
	mang<int, 3> a;
	
	return 0;
}
