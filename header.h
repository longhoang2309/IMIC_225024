#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>


//loop
int tong_so_nguyen(int so_nguyen);
int giai_thua(int so_tu_nhien);
void nhap_so();
float tinh_tien_lai(float tien_ban_dau, int so_nam);
void so_nguyen_to(int n);

//array
void tong_array();
void odd_avg();
void largest_num();
void negative_replace();
void print_odd();
void print_prime();
void print_largest();
void swap_num(int a, int b);
void small_to_large();

//string
int so_phan_tu_str(char* str);
int space_num(char* str);
int word_count(char* str);
void capitalize(char* str);
void first_capital(char* str);
char* c_count(char* str, char c);
char* str_count(char* str, char* substr);

//struct
struct phan_so
{
    int tu_so;
    int mau_so;
};
typedef struct phan_so phan_so_t;

void nhan_phan_so(phan_so_t a, phan_so_t b);
void chia_phan_so(phan_so_t a, phan_so_t b);
void cong_phan_so(phan_so_t a, phan_so_t b);
void tru_phan_so(phan_so_t a, phan_so_t b);
int ucln(int a, int b);
void rut_gon(phan_so_t* a);

typedef enum
{
    Nam,
    Nu
}gioi_tinh_t;
typedef enum
{
    Gioi,
    Kha,
    Trung_Binh,
    Yeu
}xep_hang_t;

typedef struct
{
    char ten[30]; // or char* ten;
    int tuoi;
    gioi_tinh_t gioi_tinh;
    float diem_toan;
    float diem_van;
    xep_hang_t xep_hang;
}hoc_sinh;

void scan_hs(hoc_sinh hs_arr[], int so_hs);
void print_list_hs(hoc_sinh hs_arr[], int so_hs);
void print_trung_binh_best(hoc_sinh* arr, int n);

