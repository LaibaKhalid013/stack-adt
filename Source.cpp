#include<iostream>
using namespace std;
template<typename T>
class Stack
{
	T* data;
	int capacity;
	int top;
public:
	Stack();
	Stack(int size);
	bool isEmpty();
	bool isFull();
	void push(T val);
	T pop();
	T sTop();
	~Stack();
};
int main()
{
	Stack<int> s{ 3 };
	s.push(2);
	cout << s.sTop() << "\n";
	s.push(3);
	cout<<s.pop();

}
template<typename T>
Stack<T>::Stack()
{
	capacity = 0;
	data = nullptr;
	top = -1;
}
template<typename T>
Stack<T>::Stack(int size):Stack()
{
	if (size <= 0)
	{
		cout << "capacity should be greater than 0";
	}
	capacity = size;
	data = new T[capacity];
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
void Stack<T>::push(T val)
{
	if (!isFull())
	{
		top = top + 1;
		data[top] = val;
		//cout << data[top];
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
	exit(0);
}
template<typename T>
T Stack<T>::sTop()
{
	if (!isEmpty())
	{
		int val = data[top];
		return data[top];
	}
	exit(0);
}
template<typename T>
Stack<T>::~Stack()
{
	delete[]data;
}
