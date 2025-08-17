#include <stdio.h>
#include <iostream>
#include "mảng.h"



int tong_mang(mang m)
{
	int tong = 0;
	for (int i = 0; i < m.so_luong; i++)
	{
		tong += m[i];
	}
	return tong;
}
