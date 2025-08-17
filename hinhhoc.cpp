#include "hinhhoc.h"
#include <stdio.h>

int hinh_chu_nhat_s::tinh_dien_tich()
{
	return dai * rong;
}
int hinh_chu_nhat_s::tinh_chu_vi()
{
	return (dai + rong) * 2;
}

int hinh_vuong_s::tinh_dien_tich()
{
	return canh * canh;
}
int hinh_vuong_s::tinh_chu_vi()
{
	return canh * 4;
}

/*bỏ trống*/ hinh_chu_nhat_s::hinh_chu_nhat_s()
{
	printf("ham tao is running automatically\n");
	dai = 0;
	rong = 0;
}

/*bỏ trống*/ hinh_chu_nhat_s::~hinh_chu_nhat_s()
{
	printf("doi tuong bị giai phong vung nho\n");
}


phan_so::phan_so()
{
	tu_so = 0;
	mau_so = 0;
}

phan_so::phan_so(int _tu, int _mau)
{
	tu_so = _tu;
	mau_so = _mau;
}
phan_so phan_so::nhan_phan_so(phan_so khac)
{
	phan_so kp;
	kp.tu_so = tu_so * khac.tu_so;
	kp.mau_so = mau_so * khac.mau_so;
	return kp;
}