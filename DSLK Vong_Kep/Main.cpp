#include "Header.h";

void main() {
	Dlist list;
	khoiTao(list);
	nhap_DanhSach(list);
	cout << "\n======DS VUA NHAP======" << endl;
	int kq = isEmpty(list);
	if (kq == 0) {
		xuat_DanhSach(list);
		xoa_Dau(list);
	}
	else
		cout << "\nHam chua duoc nhap. Vui long nhap danh sach..." << endl;


	

	//giaiPhong(list);

	system("pause");
}