#pragma once
#include "wrap.hpp"

template <typename T>
class Stack
{
private:
	Wrap<T>* head;
public:
	Stack();
	Stack(T item);
	Stack(const Stack& other);
	Stack(Stack&& other);
	~Stack();

	void Push(T item);//��������
	T Pop();//�������
	Wrap<T>* Peek();//��������(���������)
	int getSize();//������ ������
	void printStack();//������ ���������
};