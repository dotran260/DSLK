#include "Header.h"
void main() {
	Queue q;
	khoiTao(q);
	setValue(q);
	print(q);
	//cout << "\nPhan tu dau hang doi" << deQueue(q) << endl;
	cout << "\nSo chan: "; xuatChan(q);
	cout << endl;
	system("pause");
}