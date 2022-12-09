#pragma once
#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};
typedef Node* Nodeptr;
struct Stack {
	Nodeptr top;
};


void khoiTao(Stack& s);
int isEmpty(Stack s);
Nodeptr tao_Node(int x);
void push(Stack& s, int a);
int pop(Stack& s);

void input_Stack(Stack& s);
void output_Stack(Stack& s);
void timx(Stack s);


