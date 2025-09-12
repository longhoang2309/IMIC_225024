#include <iostream>
#include <string>

using namespace std;

enum gioitinh_t
{
	NAM,
	NU
};
enum mon_t
{
	TOAN,
	VAN
};

ostream& operator<<(ostream& os, gioitinh_t gioi_tinh)
{
	if (gioi_tinh == NAM)
		os << "NAM";
	else
		os << "NU";
	return os;
}

ostream& operator<<(ostream& os, mon_t mon)
{
	if (mon == TOAN)
		os << "TOAN";
	else
		os << "VAN";
	return os;
}

class ThongTinCaNhan
{
public:

private:
	string ten;
	int tuoi;
	gioitinh_t gioi_tinh;
public:
	ThongTinCaNhan()
	{
		ten = "";
		tuoi = 0;
		gioi_tinh = NAM;
	}
	ThongTinCaNhan(string ten, int tuoi, gioitinh_t gioitinh)
	{
		this->ten = ten;
		this->tuoi = tuoi;
		this->gioi_tinh = gioitinh;
	}

	void Set_Ten(string ten)
	{
		this->ten = ten;
	}

	string Get_Ten()
	{
		return ten;
	}

	void Set_Tuoi(int tuoi)
	{
		this->tuoi = tuoi;
	}

	int Get_Tuoi()
	{
		return tuoi;
	}

	void Set_GioiTinh(gioitinh_t GioiTinh)
	{
		this->gioi_tinh = GioiTinh;
	}

	gioitinh_t Get_GioiTinh()
	{
		return gioi_tinh;
	}

	void print()
	{
		cout << "ten: " << this->ten << endl;
		cout << "tuoi: " << this->tuoi << endl;
		cout << "gioi tinh: " << this->gioi_tinh << endl;
	}
};

class HocSinh : public ThongTinCaNhan
{
private:
	float diemToan;
	float diemVan;
	float diemTB;
public:
	HocSinh() {
		diemToan = 0.0;
		diemVan = 0.0;
		diemTB = 0.0;
	}
	HocSinh(string ten, int tuoi, gioitinh_t gioitinh, float diemToan, float diemVan) :ThongTinCaNhan(ten, tuoi, gioitinh)
	{
		this->diemToan = diemToan;
		this->diemVan = diemVan;
	}
	
	void Set_diemToan(float diemToan)
	{
		this->diemToan = diemToan;
	}
	float Get_diemToan()
	{
		return diemToan;
	}
	void Set_diemVan(float diemVan)
	{
		this->diemVan = diemVan;
	}
	float Get_diemVan()
	{
		return diemVan;
	}
	float Get_diemTB()
	{
		return (diemToan + diemVan) / 2;
	}

	void print()
	{
		cout << "ten: " << Get_Ten() << endl;
		cout << "tuoi: " << Get_Tuoi() << endl;
		cout << "gioi tinh: " << Get_GioiTinh() << endl;
		cout << "diem toan: " << this->diemToan << endl;
		cout << "diem van: " << this->diemVan << endl;
		cout << "diem tb: " << this->Get_diemTB() << endl;
	}
};

class GiaoVien: public ThongTinCaNhan
{
	mon_t bo_mon;
public:
	GiaoVien(string ten, int tuoi, gioitinh_t gioitinh, mon_t mon) :ThongTinCaNhan(ten, tuoi, gioitinh)
	{
		this->bo_mon = mon;
	}
	void Set_BoMon(mon_t mon)
	{
		this->bo_mon = mon;
	}

	void print()
	{
		cout << "ten: " << Get_Ten() << endl;
		cout << "tuoi: " << Get_Tuoi() << endl;
		cout << "gioi tinh: " << Get_GioiTinh() << endl;
		cout << "bo mon: " << this->bo_mon << endl;
	}
};


int main()
{
	HocSinh A("Nguyen Van A",18,NAM,8.5,2.5);
	A.print();
	return 0;
}
