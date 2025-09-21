#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void tach_byte(int n)
{
	int x = (unsigned int)n;
	unsigned char high = (x >> 8) & 0xFF;
	unsigned char low = x & 0xFF;
	printf("nhap so: %d (0x%04X)\n", n, x & 0xFFFF);
	printf("8 bit cao: %u (0x%02X)\n", high, high);
	printf("8 bit thap: %u (0x%02X)\n", low, low);
}

class pt_bac_2
{
private:
	double a, b, c;
public:
	pt_bac_2(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
    void giai() {
        if (a == 0) { // bậc nhất
            if (b == 0) {
                if (c == 0)
                    cout << "Phuong trinh vo so nghiem\n";
                else
                    cout << "Phuong trinh vo nghiem\n";
            }
            else {
                cout << "Phuong trinh bac nhat, nghiem: x = " << -c / b << endl;
            }
            return;
        }

        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            cout << "Phuong trinh vo nghiem thuc\n";
        }
        else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep: x = " << x << endl;
        }
        else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
};

typedef struct {
    char light;
    char fan;
    char motor;
}smartHome_t;
char chuyen_trang_thai(const char* str)
{
    if (strstr(str, "on") != NULL)
    {
        return 1;
    }
    else
        return 0;
}
smartHome_t pair_data(const char* data)
{
    smartHome_t home;
    const char* pLight = strstr(data, "\"light\"");
    home.light = (pLight && strstr(pLight, "on")) ? 1 : 0;

    const char* pFan = strstr(data, "\"fan\"");
    home.fan = (pFan && strstr(pFan, "on")) ? 1 : 0;

    const char* pMotor = strstr(data, "\"motor\"");
    home.motor = (pMotor && strstr(pMotor, "on")) ? 1 : 0;
    
    return home;
}

int main()
{
	/*int x;
	printf("Nhap so nguyen: ");
	scanf("%d", &x);

	tach_byte(x);*/

    /*double a, b, c;
    cout << "Nhap he so a, b, c: ";
    cin >> a >> b >> c;

    pt_bac_2 pt(a, b, c);
    pt.giai();*/

    const char* data = "HTTP1.1 200 OK{"\
        "\"light\": \"on\","\
        "\"fan\" : \"off\","\
        "\"motor\" : \"off\"}";

    smartHome_t x = pair_data(data);
    printf("Light: %d\n", x.light);
    printf("Fan:   %d\n", x.fan);
    printf("Motor: %d\n", x.motor);
	return 0;
}
