#include<stdio.h>
#include<iostream>
#include<malloc.h>
#include<array>
#include<string.h>
#include<vector>
using namespace std;
struct hoc_sinh
{
	const char* ten;
	float diem_toan;
	float diem_van;
};

bool diemtb(hoc_sinh& a)
{
	return ((a.diem_toan + a.diem_van) / 2);
}

//viet ham so sanh 2 hs dua vao diem tb
bool sosanh_diemtb(hoc_sinh &a, hoc_sinh &b)
{
	if (diemtb(a) > diemtb(b))
		return true;
	else
		return false;
}

template<typename kieu_du_lieu>
void sap_xep_mang(vector<kieu_du_lieu> &a, bool(*pf)(kieu_du_lieu&, kieu_du_lieu&))
{
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = i; j < a.size(); j++)
		{
			if (fp(a[i], a[j]))
			{
				kieu_du_lieu tmp = a[j];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main()
{
	vector<int> vec= { 5,3,56,781,1 };
	vector<hoc_sinh> vec2 = {
		{"ngyen van a",8.1,8.2},
		{"ngyen van b",1,8.1},
		{"ngyen van c",8.8,2},
		{"ngyen van d",7.1,7.2}
	};
	sap_xep_mang(vec2, sosanh_diemtb);
	return 0;
}
