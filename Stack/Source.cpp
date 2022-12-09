#include "Header.h"
const int stop = -99;

void init_Stack(Stack& s){
	s.sp = -1;
}
int isEmpty(Stack s) {
	return s.sp == -1;
}
int isFull(Stack s){
	return s.sp == MAX -1;
}
void push(Stack& s, int x){
	if (isFull(s))
		cout << "\nNgan xep day";
	else {
		s.sp++;
		s.ds[s.sp] = x;
	}
}
int pop(Stack& s){
	int a;
	if (isEmpty(s))
		return -1;
	else {
		a = s.ds[s.sp];
		s.ds[s.sp--];
	}
	return a;
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
	for (int i = 0; i <= s.sp; i++) {
		cout << s.ds[i] << " ";
	}
}
