#include"Header.h"

//Hàm tạo một node
node makeNode(int x) {
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

//Kiểm tra rỗng
int isEmpty(node a) {
	return (a == NULL ? 0 : 1);
}


void khoiTao(node& a) {
	a = NULL;
}
void giaiPhong(node& a) {
	node p = a;
	while (p != NULL) {
		a = a->next;
		delete p;
		p = a;
	}
}
//Đếm node
int Size(node a) {
	int dem = 0;
	while (a != NULL) {
		++dem;
		a = a->next;
	}
	return dem;
}
void nhap_DanhSach(node& a) {
	khoiTao(a);
	int x;
	do {
		cout << "\nNhap vao x= (thoat-99):";
		cin >> x;
		if (x == -99)
			break;
		them_Cuoi(a, x);
	} while (1);
}

void xuat_DanhSach(node a) {
	cout << "\n-----------------------" << endl;
	node p = a;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n-----------------------" << endl;
}

//Thêm node đầu
void them_Dau(node& a, int x) {
	node tmp = makeNode(x);
	if (a == NULL) {
		a = tmp;
	}
	else {
		tmp->next = a;
		a = tmp;
	}
}

//Thêm node cuối
void them_Cuoi(node& a, int x) {
	node tmp = makeNode(x);
	if (a == NULL) {
		a = tmp;
	}
	else {
		node p = a;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void them_Giua(node& a, int x, int pos) {
	int n = Size(a);
	if (pos <= 0 || pos > n + 1) {
		cout << "\nVi tri chen khong hop le !";
	}
	if (n == 1) {
		them_Dau(a, x);
		return;
	}
	else if (n == pos + 1) {
		them_Cuoi(a, x);
		return;
	}
	node p = a;
	for (int i = 1; i < pos - 1; i++) {
		p = p->next;
	}
	node tmp = makeNode(x);
	tmp->next = p->next;
	p->next = tmp;
}

//Xóa đầu
void xoa_Dau(node& a) {
	if (a == NULL) {
		return;
	}
	a = a->next;
}

//Xóa cuối
void xoa_Cuoi(node& a) {
	if (a == NULL) {
		return;
	}
	node truoc = NULL, sau = a;
	while (sau->next != NULL) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) {
		a = NULL;
	}
	else {
		truoc->next = NULL;
	}
}

//Xóa giữa
void xoa_Giua(node& a, int pos) {
	int n = Size(a);
	if (pos <= 0 || pos > n) {
		return;
	}
	node truoc = NULL, sau = a;

	for (int i = 1; i < pos; i++) {
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) {
		a = a->next;
	}
	else {
		truoc->next = sau->next;
	}
}

node tim_NodeX(node a, int x) {
	node p = a;
	while (p != NULL) {
		if (p->data == x)
			return p;
		p = p->next;
	}
	return p;
}
void sapxep_TangDan(node& a) {
	for (node p = a; p->next != NULL; p = p->next) {
		node min = p;
		for (node q = p->next; q != NULL; q = q->next) {
			if (q->data < min->data) {
				min = q;
			}
		}
		int tmp = min->data;
		min->data = p->data;
		p->data = tmp;
	}
}

int Max(node& a)
{
	node p = a;
	int Max;
	Max = p->data;
	while (p != NULL)
	{
		if (Max < p->data)
		{
			Max = p->data;
		}
		p = p->next;
	}
	return Max;

}

