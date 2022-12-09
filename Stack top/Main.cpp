#include "Header.h"
void main() {
	int chon = 0;
	Stack s;
	khoiTao(s);
	do
	{
		cout << "\n0 - thoat chuong trinh:";
		cout << "\n1 - nhap Stack:";
		cout << "\n2 - xuat Stack:";
		cout << "\n3 - lay mot phan tu Stack:";
		cout << "\n4 - tim Stack:";
		cout << "\nVui long chon:";
		cin >> chon;
		switch (chon)
		{
		case 0:
			break;
		case 1:
			input_Stack(s);
			break;
		case 2:
			output_Stack(s);
			break;
		case 3:
			cout << "\nLay mot phan tu stack: " << pop(s) << endl;
			break;
		case 4:
			timx(s);
			break;
		default:
			cout << "Ban chon sai, vui long chon lai!";
			break;
		}
	} while (chon != 0);

	system("pause");
}