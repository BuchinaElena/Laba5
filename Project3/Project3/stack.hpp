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

	void Push(T item);//добавить
	T Pop();//удалить
	Wrap<T>* Peek();//просмотр(заглянуть)
	int getSize();//узнать размер
	void printStack();//печать построчно
};