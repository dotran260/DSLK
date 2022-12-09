#include "Header.h"
const int stop = -99;
void khoiTao(Stack& s){
	s.top = NULL;
}
int isEmpty(Stack s) {
	return s.top == NULL;
}

Nodeptr tao_Node(int x){
	Nodeptr p;
	p = new Node;
	p->data = x;
	p->link = NULL;
	return p;

}
void push(Stack& s, int a){
	Nodeptr p;
	p = tao_Node(a);
	if (isEmpty(s))
		s.top = p;
	else {
		p->link = s.top;
		s.top = p;
	}
}
int pop(Stack& s){
	Nodeptr p;
	int a;
	if (!isEmpty(s)) {
		p = s.top;
		s.top = p->link;
		a = p->data;
		delete p;
		return a;
	}

}
void input_Stack(Stack& s){
	int x;
	while (1) {
		cout << "\nNhap gia tri cho Stack(-99): ";
		cin >> x;
		if (x == stop)
			break;
		push(s, x);
	}
}
void output_Stack(Stack& s){
	Nodeptr p = s.top;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->link;
	}
}
void timx(Stack s) {
	int x;
	cout << "Nhap gia tri can tim: ";
	cin >> x;
	int vt = 0;
	Nodeptr p = s.top;
	while (p != NULL) {
		if (p->data == x) {
			cout <<"Ton tai o vi tri thu: " << vt << endl;
		}
		else {
			vt++;
		}
		p = p->link;
	}
}
