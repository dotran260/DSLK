#pragma once
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
typedef  Node* node;
 
node makeNode(int x);
int isEmpty(node a);
int Size(node a);
void khoiTao(node& a);
void them_Dau(node& a, int x);
void them_Cuoi(node& a, int x);
void them_Giua(node& a, int x, int pos);
void nhap_DanhSach(node& a);
void xuat_DanhSach(node a);
node tim_NodeX(node a, int x);
void xoa_Dau(node& a);
void xoa_Cuoi(node& a);
void xoa_Giua(node& a, int pos);
void sapxep_TangDan(node& a);
int Max(node& a);