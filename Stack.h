#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
template<typename T>
class Stack
{
	T* data;
	int capacity;
	int top;
public:
	Stack(int size);
	bool isEmpty();
	bool isFull();
	void push(T value);
	T pop();
	T peek();
	int size();
};
#endif
template<typename T>
Stack<T>::Stack(int size)
{
	if (size <= 0)
	{
		cout << "capacity should be greater than 0" << "\n";
	}
	capacity = size;
	data = new T[capacity];
	top = -1;
}
template<typename T>
bool Stack<T>::isEmpty()
{
	if (top == -1)
	{
		return true;
	}
	return false;
}
template<typename T>
bool Stack<T>::isFull()
{
	if (top == capacity - 1)
	{
		return true;
	}
	return false;
}
template<typename T>
void  Stack<T>::push(T value)
{
	if (!isFull())
	{
		top = top + 1;
		data[top] = value;
		//cout << data[top];
	}
	else
	{
		cout << "stack is full" << "\n";
	}
}
template<typename T>
T Stack<T>::pop()
{
	if (!isEmpty())
	{
		T val = data[top];
		top = top - 1;
		return val;
	}
	else
	{
		cout << "stack is empty" << "\n";
	}
	exit(0);
}
template<typename T>
T Stack<T>::peek()
{
	if (!isEmpty())
	{
		T val = data[top];
		return val;
	}
	exit(0);
}
template<typename T>
int Stack<T>::size()
{
	return capacity;
}

