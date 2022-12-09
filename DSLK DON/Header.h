#pragma once
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct Node
{
	TYPEINFO data;
	Node* link;
};
typedef Node* Nodeptr;
//typedef Nodetr list;
void khoiTao(Nodeptr &list);
int isEmpty(Nodeptr list);
Nodeptr tao_Node(TYPEINFO x);
Nodeptr them_Dau(Nodeptr &list, TYPEINFO x);
void nhap_DanhSach(Nodeptr &list);
void xuat_DanhSach(Nodeptr list);
void giaiPhong(Nodeptr &list);
Nodeptr tim_NodeX(Nodeptr list, TYPEINFO x);
void xoa_Dau(Nodeptr &list);