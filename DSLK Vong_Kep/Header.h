#pragma once
#include <iostream>
using namespace std;

typedef int TYPEINFO;
struct Node
{
	TYPEINFO data;
	Node* next;
	Node* pre;
};
typedef Node* Nodeptr;

struct Dlist
{	
	Nodeptr firt;
	Nodeptr last;
};

void khoiTao(Dlist &list);
int isEmpty(Dlist list);
Nodeptr tao_Node(TYPEINFO x);	
void them_Dau(Dlist &list, TYPEINFO x);
void nhap_DanhSach(Dlist &list);
void xuat_DanhSach(Dlist list);
//void giaiPhong(Nodeptr &list);
//Nodeptr tim_NodeX(Nodeptr list, TYPEINFO x);
void xoa_Dau(Dlist &list);