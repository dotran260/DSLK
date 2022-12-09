#include "Header.h"

void khoiTao(node& list){
	list = NULL;
}
int isEmpty(node list){
	return list == NULL ? 0 : 1;
}
void giaiPhong(node& list){
	node p = list;
	while (p != NULL) {
		list = list -> link;
		delete p;
		p = list;
	}
}

//Đếm node
int Size(node list) {
	int dem = 0;
	while (list != NULL) {
		++dem;
		list = list->link;
	}
	return dem;
}

node makeNode(SinhVien x){
	node p;
	p = new Node;
	p->data = x;
	p->link = NULL;
	return p;
}

//Ham them 1 sinh vien
node them_Dau(node &list, SinhVien x) {
	node p = makeNode(x);
	p->link = list;
	list = p;
	return p;
}
void them_Cuoi(node& a, SinhVien x) {
	node tmp = makeNode(x);
	if (a == NULL) {
		a = tmp;
	}
	else {
		node p = a;
		while (p->link != NULL) {
			p = p->link;
		}
		p->link = tmp;
	}
}



void xoa_Dau(node& list) {
	node p;
	if (list != NULL) {
		p = list;
		list = p->link;
		delete p;
	}
}
void xoa_Cuoi(node& list) {
	if (list == NULL) {
		return;
	}
	node truoc = NULL, sau = list;
	while (sau->link != NULL) {
		truoc = sau;
		sau = sau->link;
	}
	if (truoc == NULL) {
		list = NULL;
	}
	else {
		truoc->link = NULL;
	}
}
void xoa_Sv_Masv(node& list) {
	SinhVien sv;
	cout << "\nNhap lai ma so sv can xoa: ";
	cin.getline(sv.masv, 10);
	if (strcmp(list->data.masv, sv.masv) == 0) {
		node p = list;
		list = list->link;
		delete p;
	}
	else {
		node p,
			before;
		p = list;
		before = list;
		while (p != NULL && strcmp(p->data.masv, sv.masv) != 0) {
			before = p;
			p = p->link;
		}
		if (p != NULL) {
			before->link = p->link;
			delete p;
		}
	}
}



bool kiemTra_TrungMa(node& list, char* ma) {
	node p = list;
	while (p != NULL) {
		if (strcmp(p->data.masv, ma) == 0) 
			return true;
		p = p->link;
	}
	return false;
}

void Nhap_DSSV(node &list) {
	khoiTao(list);
	SinhVien sv;
	do {
		cout << "\n Nhap MaSV (Nhap 0 de thoat): ";
		cin.getline(sv.masv, 10);
		while (kiemTra_TrungMa(list, sv.masv)) {
			cout << "\nMa so sv bi trung";
			cout << "\nNhap lai ma so sv";
			cin.getline(sv.masv, 10);
		}
		if (strcmp(sv.masv, "0") == 0)//Nhap 0 thoat
			break;
		cout << "\nNhap Ten SV: ";
		cin.getline(sv.tensv, 30);

		cout << "\nNhap Diem SV: ";
		cin >> sv.diem;
		cin.ignore();
		them_Cuoi(list, sv);
	} while (1);
}

void Xuat_DSSV(node list) {
	cout << setw(0) << "MaSV" 
		<< setw(15) << "TEN SV" 
		<< setw(20) << "Diem" << endl;
	while (list != NULL) {
		cout << setw(0) << list->data.masv << setw(15) << list->data.tensv << setw(20) << list->data.diem << endl;
		list = list->link;
	}
}
void Max(node& list)
{
	cout << "\nHoc Sinh Co So Diem Cao Nhat"<<endl;
	node p = list;
	float MaxDiem;
	string MaxTen,MaxMaSo;
	MaxDiem = p->data.diem;

	while (p != NULL)
	{
		if (MaxDiem < p->data.diem)
		{
			MaxDiem = p->data.diem;
			MaxTen = p->data.tensv;
			MaxMaSo = p->data.masv;
		}
		p = p->link;
	}
	cout << setw(0) << MaxMaSo << setw(15) << MaxTen << setw(20) << MaxDiem << endl;
}



void sapxep_TangDan(node& list) {
	for (node p = list; p->link != NULL; p = p->link) {
		node min = p;
		for (node q = p->link; q != NULL; q = q->link) {
			if (q->data.diem < min->data.diem) {
				min = q;
			}
		}
		float tmp = min->data.diem;
		min->data.diem = p->data.diem;
		p->data.diem = tmp;
	}
}
void tim_NodeX(node &list) {
	node p = list;
	string name;
	cin >> name;

	while (p != NULL) {
		if (p->data.masv == name)
			cout << "\nton tai";
		else
			cout << "\nKhong ton tai";

		p = p->link;
	}

}

//De thi: Tim SV co diem lon nhat, tim sv co tin chi cao nhat