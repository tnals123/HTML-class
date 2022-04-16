#include <iostream>
using namespace std;

class Stack {
private:
	int* arr;
	int capacity;
	int topIndex;
public:
	Stack(int capacity) {
		this->capacity = capacity;
		arr = new int[capacity];
		topIndex = -1;
	}

	void empty() {
		if (topIndex == -1) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}

	void size() {
		cout << topIndex + 1 << "\n";
	}

	void top() {
		if (topIndex == -1) {
			cout << "-1\n";
		}
		else {
			cout << arr[topIndex] << "\n";
		}
	}

	void push(int data) {
		if (topIndex + 1 == capacity) {
			cout << "FULL\n";
		}
		else {
			arr[topIndex + 1] = data;
			topIndex++;
		}
	}

	void pop() {
		if (topIndex == -1) {
			cout << "-1\n";
		}
		else {
			cout << arr[topIndex] << "\n";
			topIndex--;
		}
	}

	// size : 스택에 저장된 정수의 개수를 출력.
	//	 empty : 스택이 비어 있으면 1, 비어 있지 않으면 0을 출력.
	//	 top : 스택의 가장 위에 저장된 정수를 출력.만약 스택이 비어 있는 경우, -1을 출력.
	//	 push X : 정수 X(단, 1 ≤ X ≤ 10, 000)를 스택에 삽입.수용할 수 있는 크기를 넘어 서면
	//	FULL을 출력.
	//	 pop : 스택의 가장 위에 저장된 정수를 출력하면서 삭제.만약 스택이 비어 있는 경우, -1 을
	//	출력
};


int main() {
	int T, N;
	cin >> T >> N;
	Stack* mystack = new Stack(T);
	for (int i = 0; i < N; i++) {
		string mess;
		int data;
		cin >> mess;
		if (mess == "size") {
			mystack->size();
		}
		else if (mess == "empty") {
			mystack->empty();
		}
		else if (mess == "top") {
			mystack->top();
		}
		else if (mess == "push") {
			cin >> data;
			mystack->push(data);
		}
		else if (mess == "pop") {
			mystack->pop();
		}
	}
}