#pragma once
#include<iostream>
using namespace std;
const int MAX = 100;
typedef int TYPE;
struct Stack {
	int sp;
	TYPE ds[MAX];
};
void init_Stack(Stack& s);
int isEmpty(Stack s);
int isFull(Stack s);
void push(Stack& s, int x);
int pop(Stack& s);
void input_Stack(Stack& s);
void output_Stack(Stack& s);
