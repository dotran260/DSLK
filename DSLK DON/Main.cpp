#include "Header.h";

void main() {
	Nodeptr list;
	int x;
	int y;
	khoiTao(list);
	nhap_DanhSach(list);
	cout << "\n======DS VUA NHAP======" << endl;
	int kq = isEmpty(list);
	if (kq == 1) {
		xuat_DanhSach(list);
		cout << endl;
		//Them node dau tien
		cout << "\nNhap gia tri them vao node dau tien: ";
		cin >> x;
		them_Dau(list, x);
		xuat_DanhSach(list);

		//Tim node x;
		cout << "\nNhap gia tri can tim: ";
		cin >> y;

		Node* search = tim_NodeX(list, y);
		if (search != NULL)
			cout << "Co ton tai" << endl;
		else
			cout << "Khong ton tai" << endl;

		//Xoa node dau tien
		xoa_Dau(list);
		xuat_DanhSach(list);

		
	}

	else
		cout << "\nHam chua duoc nhap. Vui long nhap danh sach..." << endl;


	

	//giaiPhong(list);

	system("pause");
}