#pragma once
#include<iostream>
using namespace std;
typedef int TYPEINFO;
typedef struct Node* Nodeptr;
const int STOP = -99;
struct Node {
	int data;
	Node* link;
};
struct Queue {
	Nodeptr front, rear;
};

void khoiTao(Queue &q);
int isEmpty(Queue &q);
Nodeptr tao_Node(TYPEINFO x);
void enQueue(Queue &q, TYPEINFO x);
void setValue(Queue &q);
void print(Queue q);
int deQueue(Queue &q);