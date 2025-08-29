#include<stdio.h>
#include<iostream>
#include<functional>
#include<vector>
using namespace std;
struct hoc_sinh
{
	const char* ten;
	float diem_toan;
	float diem_van;
};


template<typename kieu_du_lieu, typename lambda_t>
void sap_xep_mang(vector<kieu_du_lieu> &a, lambda_t ham_so_sanh)
{
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = i; j < a.size(); j++)
		{
			if (fp(a[i], a[j]))
			{
				kieu_du_lieu tmp = a[j];
				a[j] = a[i];
				a[j] = tmp;
			}
		}
	}
}


int main()
{
	vector<int> vec= { 5,3,56,781,1 };
	sap_xep_mang(vec, [](int a, int b) {
		return a > b;
		});

	vector<hoc_sinh> vec2 = {
		{"ngyen van a",8.1,8.2},
		{"ngyen van b",1,8.1},
		{"ngyen van c",8.8,2},
		{"ngyen van d",7.1,7.2}
	};
	sap_xep_mang(vec2, [](hoc_sinh a, hoc_sinh b) {
		float a_tb = (a.diem_toan + a.diem_van) / 2;
		float b_tb = (b.diem_toan + b.diem_van) / 2;
		return a_tb > b_tb;
		});
	//sap_xep_mang(vec2, sosanh_diemtb);
	return 0;
}
