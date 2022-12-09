#include "Header.h";
void khoiTao(Dlist &list) {
	list.firt = NULL;
	list.last = NULL;
}
//DSLK VONG
int isEmpty(Dlist list) {
	return (list.firt == NULL ? 1 : 0);
}

Nodeptr tao_Node(TYPEINFO x) {
	Nodeptr p;
	p = new Node;
	p->data = x;
	p->next = NULL;
	p->pre = NULL;
	return p;
}

//THEM DSLK VONG
void them_Dau(Dlist &list, TYPEINFO x) {
	Nodeptr p;
	p = tao_Node(x);
	if (isEmpty(list)==1) {
		list.firt = p;
		list.last = p;
	}
	else {
		p->next = list.firt;
		list.firt->pre = p;
		list.firt = p;
	}
}

void them_DauKep(Dlist &list, TYPEINFO x) {
	Nodeptr p;
	p = tao_Node(x);
	if (isEmpty(list) == 1) {
		list.firt = p;
		list.last = p;
	}
	else {
		p->next = list.firt;
		list.firt = p;
	}
}


void nhap_DanhSach(Dlist &list) {
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

//DSLK VONG
void xuat_DanhSach(Dlist list) {
	Nodeptr p = list.firt;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
}

//DSLK KEP
void printList(Dlist list) {
	if (list.firt != NULL) {
		cout << "\nCac phan tu cua DSVong:";
		Nodeptr p = list.firt;
		do {
			cout << p->data << " ";
			p = p->next;

		} while (p != list.firt);
		
	}
}
void xoa_Dau(Dlist &list) {
	Nodeptr p;
	if (list.firt != NULL) {
		Nodeptr p = list.firt;
		list.firt = list.firt->next;
		list.last->next = list.firt;
		delete p;
		printList(list);
	}
	else {
		list.firt = NULL;
	}
}

//Nodeptr tim_NodeX(Nodeptr list, TYPEINFO x) {
//	Nodeptr p = list;
//	while (p != NULL) {
//		if (p->data == x)
//			return p;
//		p = p->link;
//	}
//	return p;
//}
//
