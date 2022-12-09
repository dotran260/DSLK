#include "Header.h";
void khoiTao(Nodeptr &list) {
	list = NULL;
}

int isEmpty(Nodeptr list) {
	return (list == NULL ? 0 : 1);
}

Nodeptr tao_Node(TYPEINFO x) {
	Nodeptr p;
	p = new Node;
	p->data = x;
	p->link = NULL;
	return p;
}

Nodeptr them_Dau(Nodeptr &list, TYPEINFO x) {
	Nodeptr p;
	p = tao_Node(x);
	p->link = list;
	list = p;
	return p;
}
void xoa_Dau(Nodeptr &list) {
	Nodeptr p;
	if (list != NULL) {
		p = list;
		list = p->link;
		delete p;
	}
}
void nhap_DanhSach(Nodeptr &list) {
	khoiTao(list);
	int x;
	do {
		cout << "\nNhap vao x= (thoat-99):";
		cin >> x;
		if (x == -99)
			break;
		them_Dau(list, x);
	} while (1);
}

void xuat_DanhSach(Nodeptr list) {
	Nodeptr p = list;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->link;
	}
}


void giaiPhong(Nodeptr &list) {
	Nodeptr p = list;
	while (p != NULL) {
		list = list->link;
		delete p;
		p = list;
	}
}
Nodeptr tim_NodeX(Nodeptr list, TYPEINFO x) {
	Nodeptr p = list;
	while (p != NULL) {
		if (p->data == x)
			return p;
		p = p->link;
	}
	return p;
}

