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

int phan_so::nhan_phan_so(phan_so* phan_so_khac)
{
	tu_so *= phan_so_khac->tu_so;
	mau_so *= phan_so_khac->mau_so;
	return 0;
}
void phan_so::in_phan_so()
{
	printf("%d/%d",tu_so, mau_so);
}