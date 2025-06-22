#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

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