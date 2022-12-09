#include "Header.h"
void khoiTao(Queue &q) {
	q.front = -1;
	q.rear = -1;
}
int isEmpty(Queue &q){
	if (q.front == -1) {
		return 1;
	}
	return 0;
}
int isFull(Queue q){
	return (q.rear - q.front == MAX - 1);
}
int enQueue(Queue &q, type x){
	int i;
	if (isFull(q))
		return 0;
	else {
		if (q.front == -1)
			q.front = 0;
		else if (q.rear == MAX - 1) {
			for (i = q.front; i <= q.rear; i++) {
				q.element[i - q.front] = q.element[i];
			}
			q.rear = MAX - 1 - q.front;
			q.front = 0;
		}
		q.rear++;
		q.element[q.rear] = x;
		return q.rear;
	}
}
void print(Queue q){
	if (isEmpty(q) != -1) {
		for (int i = q.front; i <= q.rear; i++) {
			cout << q.element[i] << " ";
		}
	}
	else
		cout << "Rong!!!";
}
void setValue(Queue &q){
	int x;
	while (1) {
		cout << "Nhap DL vao Queue (nhap -99 de thoat): ";
		cin >> x;
		if (x == STOP)
			break;
		enQueue(q, x);
	}
}
int deQueue(Queue &q) {
	if (isEmpty(q) != -1) {
		if (q.front == q.rear) {
			khoiTao(q);
		}
		else {
			int t = q.element[q.front];
			q.front = q.front + 1;
			return t;
		}
	}
	else {
		return 0;
	}
}
void xuatChan(Queue q) {
	if (isEmpty(q) != -1) {
		for (int i = q.front; i <= q.rear; i++) {
			if (q.element[i] % 2 == 0) {
				cout << q.element[i] << " ";
			}
		}
	}
	else
		cout << "Rong!!!";
}