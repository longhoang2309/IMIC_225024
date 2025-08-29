#pragma once
/*template <class kieu_du_lieu, int so_phan_tu>
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
int tong_mang(mang m);*/