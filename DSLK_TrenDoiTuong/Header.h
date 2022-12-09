#pragma once
#include <iostream>
#include <string.h> 
#include<iomanip>
#include <string>

using namespace std;
struct SinhVien {
	char masv[10];
	char tensv[30];
	float diem;
};

struct Node {
	SinhVien data;
	Node* link;
};
typedef struct Node* node;

void khoiTao(node& list);
int isEmpty(node list);
void giaiPhong(node& list);
node makeNode(SinhVien x);
node them_Dau(node &list, SinhVien x);
void them_Cuoi(node& a, SinhVien x);
void Max(node& list);
void xoa_Dau(node& list);
void xoa_Sv_Masv(node& list);
bool kiemTra_TrungMa(node& list, char* ma);
void Nhap_DSSV(node &list);
void Xuat_DSSV(node list);
void xoa_Cuoi(node& list);
void sapxep_TangDan(node& list);
void tim_NodeX(node& a);
