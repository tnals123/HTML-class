//1. 하나의 단어를 입력받는 크기가 10인 스택을 구현하고 pop()을 이용하여 거꾸로 출력하라.
//
//1.1 Ex.단어 ‘object’를 입력하면 ‘tcejbo’를 출력
//
//1.2 push(), pop() 구현
//
//1.3.1 Stack full과 empty에 대해 exception이나 throw를 사용한 예외처리 구현
//
//1.3.2 입력된 단어 중 알파벳이 아닌 값이 입력되었을때 예외처리 "알파벳이 아닌 값이 입력되었습니다."
//
//1.3.3 입력된 단어의 사이즈가 10 이상일 경우 예외처리 "길이가 10 이상인 단어가 입력되었습니다."
#include <iostream>
using namespace std;

class Stack {
private:
	int top, max;
	char* stack;
public:
	Stack(int size) {
		max = size;
		stack = new char[size];
		top -= 1;
	}
	bool stackFull() {
		if (top == max - 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	bool stackEmpty() {
		if (top ==-1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void push(char stackelement) {
		int size = sizeof(stackelement);
		if (size > 10) {
			cout << "길이가 10 이상인 단어가 입력되었습니다.";
		}
		if (stackFull() == 1) {
			cout << "스택이 가득 찼습니다";
		}
		else {
			stack[++top] = stackelement;
		}
	}
	void pop() {
		if (stackEmpty() == 1) {
			cout << "스택이 비었습니다.";
		}
		else {
			stack[top--];
		}
	}
	
};