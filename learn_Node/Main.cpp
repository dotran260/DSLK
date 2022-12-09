#include "Header.h"
void main() {
	//node head = NULL;
	node list;
	int x;
	//int y;
	int pos;
	khoiTao(list);
	nhap_DanhSach(list);
	
	int kq = isEmpty(list);

	if (kq  == 1) {
		xuat_DanhSach(list);
		//cout << "\nNhap gia tri them vao node: ";
		//cin >> x;
		//cout << "\nNhap vi tri them vao node: ";
		//cin >> pos;
		//them_Giua(list,x,pos);
		//xoa_Dau(list);
		//xoa_Giua(list,pos);
		
		//sapxep_TangDan(list);

		xuat_DanhSach(list);
		cout << "Max: " << Max(list);
		/*cout << "\nNhap gia tri can tim: ";
		cin >> y;
		Node* search = tim_NodeX(list, y);
		if (search != NULL)
			cout << "Co ton tai" << endl;
		else
			cout << "Khong ton tai" << endl;*/

	}
	else
		cout << "\nHam chua duoc nhap. Vui long nhap danh sach..." << endl;
	cout << endl;
	system("pause");
}