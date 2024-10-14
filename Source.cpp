#include<iostream>
using namespace std;
#include"Stack.h"
int main()
{
	Stack<int> s{ 3 };
	s.push(2);
	cout << s.sTop() << "\n";
	s.push(3);
	cout<<s.pop();

}
