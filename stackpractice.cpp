#include <iostream>
using namespace std;

class Stack {
public:
	Stack(int capacity);
	bool empty();
	int size();
	int top();
	void push(int data);
	void pop();

private:
	int* arr;
	int capacity;
	int topIndex;

};

Stack::Stack(int capacity) {
	this->capacity = capacity;
	arr = new int[capacity];
	topIndex = -1;
}

bool Stack::empty() {
	if (topIndex == -1) {
		return true;
	}
	else {
		return false;
	}
}

int Stack::size() {
	return topIndex + 1;
}

int Stack::top() {
	if (empty()) {
		cout << -1 << endl;
	}
	return arr[topIndex];
}

void Stack::push(int data) {
	if (size() == capacity) {
		return;
	}
	else if (data < 1 || data >10000) {
		cout << "FULL" << endl;
		return;
	}
	arr[++topIndex] = data;
}

void Stack::pop() {
	if (empty()) {
		cout << -1 << endl;
		return;
	}
	cout<<arr[topIndex]<< endl;
	topIndex--;
}

int main() {
	int a;
	cout << "1<=t<=20" << endl;
	cin >> a;
	Stack stack(a);
	stack.top();
	cout << stack.size() << endl;
	stack.push(1139);
	stack.pop();
	stack.pop();
	cout << stack.empty() << endl;
	stack.push(51133);
	stack.push(5825);
	stack.top();
	stack.push(213);
	cout << stack.size() << endl;
	stack.push(7002);
	stack.push(58);
	cout << stack.empty() << endl;
	stack.push(2578);
}