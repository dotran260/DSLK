#pragma once
#include<iostream>
const int MAX = 50;
typedef int type;
const int STOP = -99;
using namespace std;
struct Queue {
	int front, rear;
	int element[MAX];
};

void khoiTao(Queue &q);
int isEmpty(Queue &q);
int isFull(Queue q);
int enQueue(Queue &q, type x);
void print(Queue q);
void setValue(Queue &q);
int deQueue(Queue &q);
void xuatChan(Queue q);