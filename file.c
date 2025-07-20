#include "header.h"
#define MAX 100

typedef struct {
    char hoTen[100];
    int tuoi;
    char gioiTinh[10];
    float diemToan;
    float diemVan;
    float diemTB;
} HocSinh;

// Tính điểm trung bình cho tất cả học sinh
void tinhDiemTB(HocSinh ds[], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].diemTB = (ds[i].diemToan + ds[i].diemVan) / 2.0;
    }
}

// Tìm học sinh có điểm TB cao nhất
void inHocSinhCaoNhat(HocSinh ds[], int n) {
    float max = ds[0].diemTB;
    for (int i = 1; i < n; i++) {
        if (ds[i].diemTB > max) {
            max = ds[i].diemTB;
        }
    }

    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB == max) {
            printf("%s - DiemTB: %.2f\n", ds[i].hoTen, ds[i].diemTB);
        }
    }
}

// Sắp xếp danh sách theo điểm TB giảm dần
void sapXepTheoDiemTB(HocSinh ds[], int n) {
    HocSinh temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diemTB < ds[j].diemTB) {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

// Ghi danh sách đã sắp xếp ra file
void ghiFile(HocSinh ds[], int n, const char* filename) {
    FILE* f = fopen(filename, "w");
    if (!f) {
        printf("Khong mo duoc file de ghi!\n");
        return;
    }

    fprintf(f, "HoTen,Tuoi,GioiTinh,DiemToan,DiemVan,DiemTB\n");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s,%d,%s,%.2f,%.2f,%.2f\n", ds[i].hoTen, ds[i].tuoi, ds[i].gioiTinh,
            ds[i].diemToan, ds[i].diemVan, ds[i].diemTB);
    }

    fclose(f);
    printf("Da ghi danh sach sap xep vao file: %s\n", filename);
}

// Đọc file CSV
int docFile(const char* filename, HocSinh ds[]) {
    FILE* f = fopen(filename, "r");
    if (!f) {
        printf("Khong mo duoc file!\n");
        return 0;
    }

    char line[256];
    int i = 0;

    fgets(line, sizeof(line), f); // Bỏ qua dòng tiêu đề

    while (fgets(line, sizeof(line), f)) {
        scanf(line, "%[^,],%d,%[^,],%f,%f", ds[i].hoTen, &ds[i].tuoi, ds[i].gioiTinh, &ds[i].diemToan, &ds[i].diemVan);
        i++;
    }

    fclose(f);
    return i; // số lượng học sinh
}
