#include<stdio.h>
class hinh_chu_nhat_s
{
public:
	int dai;
	int rong;

	int tinh_dien_tich()
	{
		return dai * rong;
	}
};

int main()
{
	hinh_chu_nhat_s A;
	A.dai = 20;
	A.rong = 10;
	int x = A.tinh_dien_tich();
	return 0;
}